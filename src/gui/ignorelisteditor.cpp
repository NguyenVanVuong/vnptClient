﻿/*
 * Copyright (C) by Daniel Molkentin <danimo@owncloud.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#include "configfile.h"

#include "ignorelisteditor.h"
#include "folderman.h"
#include "ui_ignorelisteditor.h"
#include "excludedfiles.h"

#include <QFile>
#include <QDir>
#include <QListWidget>
#include <QListWidgetItem>
#include <QMessageBox>
#include <QInputDialog>

namespace OCC {

static int patternCol = 0;
static int deletableCol = 1;

IgnoreListEditor::IgnoreListEditor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IgnoreListEditor)
{
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    ui->setupUi(this);

	//Nghia hide
	/*
    ui->descriptionLabel->setText(tr("Tập tin hoặc thư mục khớp với mẫu sẽ không được đồng bộ.\n\n"
                                     "Các mục nơi mà được cho phép sẽ bị xóa nếu chúng cung cấp một "
                                     "thư mục từ bị xóa. "
                                     "Điều này hữu ích cho meta data."));
	*/

	ui->buttonBox->button(QDialogButtonBox::Ok)->setText(tr("Đồng ý"));
	ui->buttonBox->button(QDialogButtonBox::Cancel)->setText(tr("Đóng lại"));

	ui->descriptionLabel->setText(tr("Tập tin hoặc thư mục khớp với định dạng sẽ không được đồng bộ."));

    ConfigFile cfgFile;
    readOnlyTooltip = tr("Mục nhập này được cung cấp bởi hệ thống tại '%1' "
                         "và không thể sửa đổi trong khung nhìn này.")
            .arg(QDir::toNativeSeparators(cfgFile.excludeFile(ConfigFile::SystemScope)));

    readIgnoreFile(cfgFile.excludeFile(ConfigFile::SystemScope), true);
    readIgnoreFile(cfgFile.excludeFile(ConfigFile::UserScope), false);

    connect(this, SIGNAL(accepted()), SLOT(slotUpdateLocalIgnoreList()));
    ui->removePushButton->setEnabled(false);
    connect(ui->tableWidget, SIGNAL(itemSelectionChanged()), SLOT(slotItemSelectionChanged()));
    connect(ui->removePushButton, SIGNAL(clicked()), SLOT(slotRemoveCurrentItem()));
    connect(ui->addPushButton, SIGNAL(clicked()), SLOT(slotAddPattern()));

    ui->tableWidget->horizontalHeader()->setResizeMode(patternCol, QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setVisible(false);

    ui->syncHiddenFilesCheckBox->setChecked( !FolderMan::instance()->ignoreHiddenFiles() );
}

IgnoreListEditor::~IgnoreListEditor()
{
    delete ui;
}

bool IgnoreListEditor::ignoreHiddenFiles()
{
    return ! ui->syncHiddenFilesCheckBox->isChecked();
}

void IgnoreListEditor::slotItemSelectionChanged()
{
    QTableWidgetItem *item = ui->tableWidget->currentItem();
    if (!item) {
        ui->removePushButton->setEnabled(false);
        return;
    }

    bool enable = item->flags() & Qt::ItemIsEnabled;
    ui->removePushButton->setEnabled(enable);
}

void IgnoreListEditor::slotRemoveCurrentItem()
{
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());
}

void IgnoreListEditor::slotUpdateLocalIgnoreList()
{
    ConfigFile cfgFile;
    QString ignoreFile = cfgFile.excludeFile(ConfigFile::UserScope);
    QFile ignores(ignoreFile);
    if (ignores.open(QIODevice::WriteOnly)) {
        for(int row = 0; row < ui->tableWidget->rowCount(); ++row) {
            QTableWidgetItem *patternItem = ui->tableWidget->item(row, patternCol);
            QTableWidgetItem *deletableItem = ui->tableWidget->item(row, deletableCol);
            if (patternItem->flags() & Qt::ItemIsEnabled) {
                QByteArray prepend;
                if (deletableItem->checkState() == Qt::Checked) {
                    prepend = "]";
                }
                ignores.write(prepend+patternItem->text().toUtf8()+'\n');
            }
        }
    } else {
        QMessageBox::warning(this, tr("Không thể mở tập tin"),
                             tr("Không thể ghi các thay đổi cho '%1'.").arg(ignoreFile));
    }
    ignores.close(); //close the file before reloading stuff.

    FolderMan * folderMan = FolderMan::instance();

    /* handle the hidden file checkbox */

    /* the ignoreHiddenFiles flag is a folder specific setting, but for now, it is
     * handled globally. Save it to every folder that is defined.
     */
    folderMan->setIgnoreHiddenFiles(ignoreHiddenFiles());

    // We need to force a remote discovery after a change of the ignore list.
    // Otherwise we would not download the files/directories that are no longer
    // ignored (because the remote etag did not change)   (issue #3172)
    foreach (Folder* folder, folderMan->map()) {
        folder->journalDb()->forceRemoteDiscoveryNextSync();
        folderMan->slotScheduleSync(folder);
    }

    ExcludedFiles::instance().reloadExcludes();
}

void IgnoreListEditor::slotAddPattern()
{
    bool okClicked;
	
    QString pattern = QInputDialog::getText(this, tr("Thêm định dạng không đồng bộ"),
                                            tr("Thêm một định dạng không đồng bộ:"),
                                            QLineEdit::Normal, QString(), &okClicked);

    if (!okClicked || pattern.isEmpty())
        return;

    addPattern(pattern, false, false);
    ui->tableWidget->scrollToBottom();
}

void IgnoreListEditor::readIgnoreFile(const QString &file, bool readOnly)
{
    QFile ignores(file);
    if (ignores.open(QIODevice::ReadOnly)) {
        while (!ignores.atEnd()) {
            QString line = QString::fromUtf8(ignores.readLine());
            line.chop(1);
            if (!line.isEmpty() && !line.startsWith("#")) {
                bool deletable = false;
                if (line.startsWith(']')) {
                    deletable = true;
                    line = line.mid(1);
                }
                addPattern(line, deletable, readOnly);
            }
        }
    }
}

int IgnoreListEditor::addPattern(const QString &pattern, bool deletable, bool readOnly)
{
    int newRow = ui->tableWidget->rowCount();
    ui->tableWidget->setRowCount(newRow + 1);

    QTableWidgetItem *patternItem = new QTableWidgetItem;
    patternItem->setText(pattern);
    ui->tableWidget->setItem(newRow, patternCol, patternItem);

    QTableWidgetItem *deletableItem = new QTableWidgetItem;
    deletableItem->setFlags(Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
    deletableItem->setCheckState(deletable ? Qt::Checked : Qt::Unchecked);
    ui->tableWidget->setItem(newRow, deletableCol, deletableItem);

    if (readOnly) {
        patternItem->setFlags(patternItem->flags() ^ Qt::ItemIsEnabled);
        patternItem->setToolTip(readOnlyTooltip);
        deletableItem->setFlags(deletableItem->flags() ^ Qt::ItemIsEnabled);
    }

    return newRow;
}

} // namespace OCC
