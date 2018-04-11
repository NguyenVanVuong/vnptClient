﻿/*
 * Copyright (C) by Klaas Freitag <freitag@kde.org>
 * Copyright (C) by Olivier Goffart <ogoffart@woboq.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#include <QInputDialog>
#include <QLabel>
#include "creds/httpcredentialsgui.h"
#include "theme.h"
#include "account.h"

using namespace QKeychain;

namespace OCC
{

void HttpCredentialsGui::askFromUser()
{
    // The rest of the code assumes that this will be done asynchronously
    QMetaObject::invokeMethod(this, "askFromUserAsync", Qt::QueuedConnection);
}

void HttpCredentialsGui::askFromUserAsync()
{
	//Nghia edit
    /*QString msg = tr("Vui lòng nhập %1 mật khẩu:<br>"
                     "<br>"
                     "Tên đăng nhập: %2<br>"
                     "Tài khoản: %3<br>")
                  .arg(Utility::escape(Theme::instance()->appNameGUI()),
                       Utility::escape(_user),
                       Utility::escape(_account->displayName()));*/
	QString msg = tr("Vui lòng nhập %1 mật khẩu:<br>"
		"<br>"
		"Tên đăng nhập: %2")
		.arg(Utility::escape(Theme::instance()->appNameGUI()),
			Utility::escape(_user));

    QString reqTxt = requestAppPasswordText(_account);
    if (!reqTxt.isEmpty()) {
        msg += QLatin1String("<br>") + reqTxt + QLatin1String("<br>");
    }
    if (!_fetchErrorString.isEmpty()) {
        msg += QLatin1String("<br>") + tr("Đọc keychain thất bại với lỗi: '%1'").arg(
                    Utility::escape(_fetchErrorString)) + QLatin1String("<br>");
    }

    QInputDialog dialog;
    dialog.setWindowTitle(tr("Nhập mật khẩu"));
    dialog.setLabelText(msg);
	dialog.setCancelButtonText("Hủy bỏ");
	dialog.setOkButtonText("Chấp nhận");
    dialog.setTextValue(_previousPassword);
    dialog.setTextEchoMode(QLineEdit::Password);
    if (QLabel *dialogLabel = dialog.findChild<QLabel *>()) {
        dialogLabel->setOpenExternalLinks(true);
        dialogLabel->setTextFormat(Qt::RichText);
    }

    bool ok = dialog.exec();
    if (ok) {
        _password = dialog.textValue();
        _ready = true;
        persist();
    }
    emit asked();
}

QString HttpCredentialsGui::requestAppPasswordText(const Account* account)
{
    if (account->serverVersionInt() < 0x090100) {
        // Older server than 9.1 does not have trhe feature to request App Password
        return QString();
    }

    return tr("<a href=\"%1\">Nhấn vào đây</a> để yêu cầu mật khẩu ứng dụng từ web.")
        .arg(account->url().toString() + QLatin1String("/index.php/settings/personal?section=apppasswords"));
}


} // namespace OCC
