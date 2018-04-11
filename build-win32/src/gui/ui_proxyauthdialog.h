/********************************************************************************
** Form generated from reading UI file 'proxyauthdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROXYAUTHDIALOG_H
#define UI_PROXYAUTHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

namespace OCC {

class Ui_ProxyAuthDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *usernameEdit;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *passwordEdit;
    QDialogButtonBox *buttonBox;
    QLabel *proxyAddress;

    void setupUi(QDialog *OCC__ProxyAuthDialog)
    {
        if (OCC__ProxyAuthDialog->objectName().isEmpty())
            OCC__ProxyAuthDialog->setObjectName(QStringLiteral("OCC__ProxyAuthDialog"));
        OCC__ProxyAuthDialog->resize(351, 141);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OCC__ProxyAuthDialog->sizePolicy().hasHeightForWidth());
        OCC__ProxyAuthDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(OCC__ProxyAuthDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(OCC__ProxyAuthDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        usernameEdit = new QLineEdit(OCC__ProxyAuthDialog);
        usernameEdit->setObjectName(QStringLiteral("usernameEdit"));

        gridLayout->addWidget(usernameEdit, 3, 1, 1, 1);

        label_4 = new QLabel(OCC__ProxyAuthDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label = new QLabel(OCC__ProxyAuthDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_3 = new QLabel(OCC__ProxyAuthDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        passwordEdit = new QLineEdit(OCC__ProxyAuthDialog);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        passwordEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordEdit, 4, 1, 1, 1);

        buttonBox = new QDialogButtonBox(OCC__ProxyAuthDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 2);

        proxyAddress = new QLabel(OCC__ProxyAuthDialog);
        proxyAddress->setObjectName(QStringLiteral("proxyAddress"));

        gridLayout->addWidget(proxyAddress, 2, 1, 1, 1);


        retranslateUi(OCC__ProxyAuthDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), OCC__ProxyAuthDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OCC__ProxyAuthDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OCC__ProxyAuthDialog);
    } // setupUi

    void retranslateUi(QDialog *OCC__ProxyAuthDialog)
    {
        OCC__ProxyAuthDialog->setWindowTitle(QApplication::translate("OCC::ProxyAuthDialog", "Y\303\252u c\341\272\247u x\303\241c th\341\273\261c proxy", 0));
        label_2->setText(QApplication::translate("OCC::ProxyAuthDialog", "T\303\252n \304\221\304\203ng nh\341\272\255p:", 0));
        label_4->setText(QApplication::translate("OCC::ProxyAuthDialog", "Proxy:", 0));
        label->setText(QApplication::translate("OCC::ProxyAuthDialog", "M\303\241y ch\341\273\247 proxy c\341\272\247n c\303\263 t\303\252n ng\306\260\341\273\235i d\303\271ng v\303\240 m\341\272\255t kh\341\272\251u.", 0));
        label_3->setText(QApplication::translate("OCC::ProxyAuthDialog", "M\341\272\255t kh\341\272\251u:", 0));
        proxyAddress->setText(QApplication::translate("OCC::ProxyAuthDialog", "TextLabel", 0));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class ProxyAuthDialog: public Ui_ProxyAuthDialog {};
} // namespace Ui
} // namespace OCC

#endif // UI_PROXYAUTHDIALOG_H
