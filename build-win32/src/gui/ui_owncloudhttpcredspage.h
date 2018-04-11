/********************************************************************************
** Form generated from reading UI file 'owncloudhttpcredspage.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNCLOUDHTTPCREDSPAGE_H
#define UI_OWNCLOUDHTTPCREDSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OwncloudHttpCredsPage
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *resultLayout;
    QLabel *topLabel;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout;
    QLabel *usernameLabel;
    QLabel *passwordLabel;
    QLabel *errorLabel;
    QLineEdit *leUsername;
    QLineEdit *lePassword;
    QSpacerItem *verticalSpacer;
    QLabel *bottomLabel;
    QLabel *tokenLabel;

    void setupUi(QWidget *OwncloudHttpCredsPage)
    {
        if (OwncloudHttpCredsPage->objectName().isEmpty())
            OwncloudHttpCredsPage->setObjectName(QStringLiteral("OwncloudHttpCredsPage"));
        OwncloudHttpCredsPage->resize(350, 248);
        gridLayout = new QGridLayout(OwncloudHttpCredsPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        resultLayout = new QHBoxLayout();
        resultLayout->setObjectName(QStringLiteral("resultLayout"));

        gridLayout->addLayout(resultLayout, 5, 1, 1, 1);

        topLabel = new QLabel(OwncloudHttpCredsPage);
        topLabel->setObjectName(QStringLiteral("topLabel"));
        topLabel->setText(QStringLiteral("TextLabel"));
        topLabel->setAlignment(Qt::AlignCenter);
        topLabel->setWordWrap(true);

        gridLayout->addWidget(topLabel, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(48, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(48, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        usernameLabel = new QLabel(OwncloudHttpCredsPage);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, usernameLabel);

        passwordLabel = new QLabel(OwncloudHttpCredsPage);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, passwordLabel);

        errorLabel = new QLabel(OwncloudHttpCredsPage);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setText(QStringLiteral("Error Label"));
        errorLabel->setOpenExternalLinks(true);

        formLayout->setWidget(2, QFormLayout::SpanningRole, errorLabel);

        leUsername = new QLineEdit(OwncloudHttpCredsPage);
        leUsername->setObjectName(QStringLiteral("leUsername"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leUsername);

        lePassword = new QLineEdit(OwncloudHttpCredsPage);
        lePassword->setObjectName(QStringLiteral("lePassword"));
        lePassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lePassword);


        gridLayout->addLayout(formLayout, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 68, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        bottomLabel = new QLabel(OwncloudHttpCredsPage);
        bottomLabel->setObjectName(QStringLiteral("bottomLabel"));
        bottomLabel->setText(QStringLiteral("TextLabel"));

        gridLayout->addWidget(bottomLabel, 6, 0, 1, 3);

        tokenLabel = new QLabel(OwncloudHttpCredsPage);
        tokenLabel->setObjectName(QStringLiteral("tokenLabel"));
        tokenLabel->setText(QStringLiteral("TextLabel"));
        tokenLabel->setWordWrap(true);
        tokenLabel->setOpenExternalLinks(true);

        gridLayout->addWidget(tokenLabel, 1, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        usernameLabel->setBuddy(leUsername);
        passwordLabel->setBuddy(lePassword);
#endif // QT_NO_SHORTCUT

        retranslateUi(OwncloudHttpCredsPage);

        QMetaObject::connectSlotsByName(OwncloudHttpCredsPage);
    } // setupUi

    void retranslateUi(QWidget *OwncloudHttpCredsPage)
    {
        OwncloudHttpCredsPage->setWindowTitle(QApplication::translate("OwncloudHttpCredsPage", "Form", 0));
        usernameLabel->setText(QApplication::translate("OwncloudHttpCredsPage", "&T\303\252n \304\221\304\203ng nh\341\272\255p", 0));
        passwordLabel->setText(QApplication::translate("OwncloudHttpCredsPage", "&M\341\272\255t kh\341\272\251u", 0));
    } // retranslateUi

};

namespace Ui {
    class OwncloudHttpCredsPage: public Ui_OwncloudHttpCredsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNCLOUDHTTPCREDSPAGE_H
