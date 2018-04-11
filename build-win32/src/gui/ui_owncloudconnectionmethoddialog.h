/********************************************************************************
** Form generated from reading UI file 'owncloudconnectionmethoddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNCLOUDCONNECTIONMETHODDIALOG_H
#define UI_OWNCLOUDCONNECTIONMETHODDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

namespace OCC {

class Ui_OwncloudConnectionMethodDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPushButton *btnBack;
    QPushButton *btnNoTLS;
    QPushButton *btnClientSideTLS;

    void setupUi(QDialog *OCC__OwncloudConnectionMethodDialog)
    {
        if (OCC__OwncloudConnectionMethodDialog->objectName().isEmpty())
            OCC__OwncloudConnectionMethodDialog->setObjectName(QStringLiteral("OCC__OwncloudConnectionMethodDialog"));
        OCC__OwncloudConnectionMethodDialog->resize(367, 208);
        OCC__OwncloudConnectionMethodDialog->setModal(true);
        gridLayout_2 = new QGridLayout(OCC__OwncloudConnectionMethodDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        label = new QLabel(OCC__OwncloudConnectionMethodDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnBack = new QPushButton(OCC__OwncloudConnectionMethodDialog);
        btnBack->setObjectName(QStringLiteral("btnBack"));

        verticalLayout->addWidget(btnBack);

        btnNoTLS = new QPushButton(OCC__OwncloudConnectionMethodDialog);
        btnNoTLS->setObjectName(QStringLiteral("btnNoTLS"));

        verticalLayout->addWidget(btnNoTLS);

        btnClientSideTLS = new QPushButton(OCC__OwncloudConnectionMethodDialog);
        btnClientSideTLS->setObjectName(QStringLiteral("btnClientSideTLS"));

        verticalLayout->addWidget(btnClientSideTLS);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(OCC__OwncloudConnectionMethodDialog);

        QMetaObject::connectSlotsByName(OCC__OwncloudConnectionMethodDialog);
    } // setupUi

    void retranslateUi(QDialog *OCC__OwncloudConnectionMethodDialog)
    {
        OCC__OwncloudConnectionMethodDialog->setWindowTitle(QApplication::translate("OCC::OwncloudConnectionMethodDialog", "K\341\272\277t n\341\273\221i th\341\272\245t b\341\272\241i", 0));
        label->setText(QApplication::translate("OCC::OwncloudConnectionMethodDialog", "<html><head/><body><p>Kh\303\264ng th\341\273\203 k\341\272\277t n\341\273\221i v\341\273\233i \304\221\341\273\213a ch\341\273\211 m\303\241y ch\341\273\247 b\341\272\243o m\341\272\255t \304\221\306\260\341\273\243c ch\341\273\211 \304\221\341\273\213nh. B\341\272\241n mu\341\273\221n ti\341\272\277n h\303\240nh nh\306\260 th\341\272\277 n\303\240o?</p></body></html>", 0));
        btnBack->setText(QApplication::translate("OCC::OwncloudConnectionMethodDialog", "Ch\341\273\215n m\341\273\231t URL kh\303\241c", 0));
        btnNoTLS->setText(QApplication::translate("OCC::OwncloudConnectionMethodDialog", "Th\341\273\255 l\341\272\241i kh\303\264ng \304\221\306\260\341\273\243c m\303\243 h\303\263a qua HTTP (kh\303\264ng an to\303\240n)", 0));
        btnClientSideTLS->setText(QApplication::translate("OCC::OwncloudConnectionMethodDialog", "\304\220\341\273\213nh c\341\272\245u h\303\254nh ch\341\273\251ng ch\341\273\211 TLS ph\303\255a m\303\241y kh\303\241ch", 0));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class OwncloudConnectionMethodDialog: public Ui_OwncloudConnectionMethodDialog {};
} // namespace Ui
} // namespace OCC

#endif // UI_OWNCLOUDCONNECTIONMETHODDIALOG_H
