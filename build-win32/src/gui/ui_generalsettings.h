/********************************************************************************
** Form generated from reading UI file 'generalsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALSETTINGS_H
#define UI_GENERALSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

namespace OCC {

class Ui_GeneralSettings
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *generalGroupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *autostartCheckBox;
    QCheckBox *desktopNotificationsCheckBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *ignoredFilesButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *crashreporterCheckBox;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OCC__GeneralSettings)
    {
        if (OCC__GeneralSettings->objectName().isEmpty())
            OCC__GeneralSettings->setObjectName(QStringLiteral("OCC__GeneralSettings"));
        OCC__GeneralSettings->resize(706, 366);
        gridLayout_3 = new QGridLayout(OCC__GeneralSettings);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        generalGroupBox = new QGroupBox(OCC__GeneralSettings);
        generalGroupBox->setObjectName(QStringLiteral("generalGroupBox"));
        gridLayout_2 = new QGridLayout(generalGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        autostartCheckBox = new QCheckBox(generalGroupBox);
        autostartCheckBox->setObjectName(QStringLiteral("autostartCheckBox"));

        gridLayout_2->addWidget(autostartCheckBox, 0, 0, 1, 1);

        desktopNotificationsCheckBox = new QCheckBox(generalGroupBox);
        desktopNotificationsCheckBox->setObjectName(QStringLiteral("desktopNotificationsCheckBox"));

        gridLayout_2->addWidget(desktopNotificationsCheckBox, 0, 1, 1, 1);


        gridLayout_3->addWidget(generalGroupBox, 0, 0, 1, 1);

        groupBox = new QGroupBox(OCC__GeneralSettings);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        ignoredFilesButton = new QPushButton(groupBox);
        ignoredFilesButton->setObjectName(QStringLiteral("ignoredFilesButton"));

        gridLayout->addWidget(ignoredFilesButton, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(555, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 1, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 3);

        crashreporterCheckBox = new QCheckBox(groupBox);
        crashreporterCheckBox->setObjectName(QStringLiteral("crashreporterCheckBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(crashreporterCheckBox->sizePolicy().hasHeightForWidth());
        crashreporterCheckBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(crashreporterCheckBox, 2, 0, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_5, 2, 2, 1, 1);


        gridLayout_3->addWidget(groupBox, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);

        QWidget::setTabOrder(autostartCheckBox, desktopNotificationsCheckBox);
        QWidget::setTabOrder(desktopNotificationsCheckBox, ignoredFilesButton);
        QWidget::setTabOrder(ignoredFilesButton, crashreporterCheckBox);

        retranslateUi(OCC__GeneralSettings);

        QMetaObject::connectSlotsByName(OCC__GeneralSettings);
    } // setupUi

    void retranslateUi(QWidget *OCC__GeneralSettings)
    {
        OCC__GeneralSettings->setWindowTitle(QApplication::translate("OCC::GeneralSettings", "Form", 0));
        generalGroupBox->setTitle(QApplication::translate("OCC::GeneralSettings", "C\303\240i \304\221\341\272\267t chung", 0));
        autostartCheckBox->setText(QApplication::translate("OCC::GeneralSettings", "&Kh\341\273\237i \304\221\341\273\231ng c\303\271ng h\341\273\207 th\341\273\221ng", 0));
        desktopNotificationsCheckBox->setText(QApplication::translate("OCC::GeneralSettings", "Hi\341\273\203n th\341\273\213 &th\303\264ng b\303\241o tr\303\252n m\303\240n h\303\254nh", 0));
        groupBox->setTitle(QApplication::translate("OCC::GeneralSettings", "N\303\242ng cao", 0));
        ignoredFilesButton->setText(QApplication::translate("OCC::GeneralSettings", "C\341\272\255p nh\341\272\255t &c\303\241c t\341\272\255p tin b\341\273\213 b\341\273\217 qua", 0));
        crashreporterCheckBox->setText(QApplication::translate("OCC::GeneralSettings", "Hi\341\273\203n th\341\273\213 b\303\241o c\303\241o l\341\273\227i", 0));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class GeneralSettings: public Ui_GeneralSettings {};
} // namespace Ui
} // namespace OCC

#endif // UI_GENERALSETTINGS_H
