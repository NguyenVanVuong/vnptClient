/********************************************************************************
** Form generated from reading UI file 'owncloudsetuppage.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNCLOUDSETUPPAGE_H
#define UI_OWNCLOUDSETUPPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OwncloudSetupPage
{
public:
    QGridLayout *gridLayout;
    QLabel *serverAddressLabel;
    QLabel *topLabel;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *cbSecureConnect;
    QCheckBox *cbConnectOC;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *leUsername;
    QLabel *label_4;
    QLineEdit *lePassword;
    QCheckBox *cbNoPasswordStore;
    QLabel *sideLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *protocolLabel;
    QLineEdit *leUrl;
    QLabel *bottomLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OwncloudSetupPage)
    {
        if (OwncloudSetupPage->objectName().isEmpty())
            OwncloudSetupPage->setObjectName(QStringLiteral("OwncloudSetupPage"));
        OwncloudSetupPage->resize(480, 278);
        gridLayout = new QGridLayout(OwncloudSetupPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        serverAddressLabel = new QLabel(OwncloudSetupPage);
        serverAddressLabel->setObjectName(QStringLiteral("serverAddressLabel"));

        gridLayout->addWidget(serverAddressLabel, 1, 0, 1, 1);

        topLabel = new QLabel(OwncloudSetupPage);
        topLabel->setObjectName(QStringLiteral("topLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(topLabel->sizePolicy().hasHeightForWidth());
        topLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(topLabel, 0, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        cbSecureConnect = new QCheckBox(OwncloudSetupPage);
        cbSecureConnect->setObjectName(QStringLiteral("cbSecureConnect"));
        cbSecureConnect->setChecked(true);

        verticalLayout->addWidget(cbSecureConnect);

        cbConnectOC = new QCheckBox(OwncloudSetupPage);
        cbConnectOC->setObjectName(QStringLiteral("cbConnectOC"));
        cbConnectOC->setEnabled(true);
        cbConnectOC->setCheckable(true);
        cbConnectOC->setChecked(true);

        verticalLayout->addWidget(cbConnectOC);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(OwncloudSetupPage);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        leUsername = new QLineEdit(OwncloudSetupPage);
        leUsername->setObjectName(QStringLiteral("leUsername"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leUsername);

        label_4 = new QLabel(OwncloudSetupPage);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        lePassword = new QLineEdit(OwncloudSetupPage);
        lePassword->setObjectName(QStringLiteral("lePassword"));
        lePassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lePassword);


        verticalLayout->addLayout(formLayout);

        cbNoPasswordStore = new QCheckBox(OwncloudSetupPage);
        cbNoPasswordStore->setObjectName(QStringLiteral("cbNoPasswordStore"));

        verticalLayout->addWidget(cbNoPasswordStore);


        horizontalLayout_2->addLayout(verticalLayout);

        sideLabel = new QLabel(OwncloudSetupPage);
        sideLabel->setObjectName(QStringLiteral("sideLabel"));

        horizontalLayout_2->addWidget(sideLabel);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        protocolLabel = new QLabel(OwncloudSetupPage);
        protocolLabel->setObjectName(QStringLiteral("protocolLabel"));

        horizontalLayout->addWidget(protocolLabel);

        leUrl = new QLineEdit(OwncloudSetupPage);
        leUrl->setObjectName(QStringLiteral("leUrl"));
        leUrl->setEnabled(true);

        horizontalLayout->addWidget(leUrl);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);

        bottomLabel = new QLabel(OwncloudSetupPage);
        bottomLabel->setObjectName(QStringLiteral("bottomLabel"));

        gridLayout->addWidget(bottomLabel, 4, 0, 1, 2);

        verticalSpacer = new QSpacerItem(344, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        serverAddressLabel->setBuddy(leUrl);
        label_2->setBuddy(leUsername);
        label_4->setBuddy(lePassword);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(leUrl, cbSecureConnect);
        QWidget::setTabOrder(cbSecureConnect, cbConnectOC);
        QWidget::setTabOrder(cbConnectOC, leUsername);
        QWidget::setTabOrder(leUsername, lePassword);
        QWidget::setTabOrder(lePassword, cbNoPasswordStore);

        retranslateUi(OwncloudSetupPage);

        QMetaObject::connectSlotsByName(OwncloudSetupPage);
    } // setupUi

    void retranslateUi(QWidget *OwncloudSetupPage)
    {
        OwncloudSetupPage->setWindowTitle(QApplication::translate("OwncloudSetupPage", "C\303\240i \304\221\341\272\267t", 0));
        serverAddressLabel->setText(QApplication::translate("OwncloudSetupPage", "\304\220\341\273\213a ch\341\273\211 &m\303\241y ch\341\273\247:", 0));
        topLabel->setText(QApplication::translate("OwncloudSetupPage", "TextLabel", 0));
        cbSecureConnect->setText(QApplication::translate("OwncloudSetupPage", "S\341\273\255 d\341\273\245ng &k\341\272\277t n\341\273\221i b\341\272\243o m\341\272\255t", 0));
        cbConnectOC->setText(QApplication::translate("OwncloudSetupPage", "CheckBox", 0));
        label_2->setText(QApplication::translate("OwncloudSetupPage", "&T\303\252n \304\221\304\203ng nh\341\272\255p:", 0));
#ifndef QT_NO_TOOLTIP
        leUsername->setToolTip(QApplication::translate("OwncloudSetupPage", "Nh\341\272\255p t\303\252n \304\221\304\203ng nh\341\272\255p VnptDrive.", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("OwncloudSetupPage", "&M\341\272\255t kh\341\272\251u:", 0));
#ifndef QT_NO_TOOLTIP
        lePassword->setToolTip(QApplication::translate("OwncloudSetupPage", "Nh\341\272\255p m\341\272\255t kh\341\272\251u c\341\273\247a VnptDrive.", 0));
#endif // QT_NO_TOOLTIP
        lePassword->setText(QString());
#ifndef QT_NO_TOOLTIP
        cbNoPasswordStore->setToolTip(QApplication::translate("OwncloudSetupPage", "Kh\303\264ng cho ph\303\251p l\306\260u tr\341\273\257 m\341\272\255t kh\341\272\251u.", 0));
#endif // QT_NO_TOOLTIP
        cbNoPasswordStore->setText(QApplication::translate("OwncloudSetupPage", "&Kh\303\264ng l\306\260u m\341\272\255t kh\341\272\251u tr\303\252n m\303\241y", 0));
        sideLabel->setText(QApplication::translate("OwncloudSetupPage", "TextLabel", 0));
        protocolLabel->setText(QApplication::translate("OwncloudSetupPage", "https://", 0));
#ifndef QT_NO_TOOLTIP
        leUrl->setToolTip(QApplication::translate("OwncloudSetupPage", "Nh\341\272\255p url c\341\273\247a VnptDrive m\303\240 b\341\272\241n mu\341\273\221n k\341\272\277t n\341\273\221i (kh\303\264ng c\303\263 http ho\341\272\267c https).", 0));
#endif // QT_NO_TOOLTIP
        bottomLabel->setText(QApplication::translate("OwncloudSetupPage", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class OwncloudSetupPage: public Ui_OwncloudSetupPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNCLOUDSETUPPAGE_H
