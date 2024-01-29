/********************************************************************************
** Form generated from reading UI file 'LoginAccount.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINACCOUNT_H
#define UI_LOGINACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginAccount
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *login_emp_id;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *login_ok_btn;
    QPushButton *login_cancel_btn;

    void setupUi(QWidget *LoginAccount)
    {
        if (LoginAccount->objectName().isEmpty())
            LoginAccount->setObjectName(QString::fromUtf8("LoginAccount"));
        LoginAccount->resize(499, 426);
        label = new QLabel(LoginAccount);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 10, 221, 51));
        label->setStyleSheet(QString::fromUtf8("font-size:30px;\n"
"color:white;"));
        layoutWidget = new QWidget(LoginAccount);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 100, 441, 151));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(38);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:white;"));

        horizontalLayout->addWidget(label_2);

        login_emp_id = new QComboBox(layoutWidget);
        login_emp_id->setObjectName(QString::fromUtf8("login_emp_id"));

        horizontalLayout->addWidget(login_emp_id);


        verticalLayout->addLayout(horizontalLayout);

        layoutWidget1 = new QWidget(LoginAccount);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(140, 300, 207, 34));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(55);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        login_ok_btn = new QPushButton(layoutWidget1);
        login_ok_btn->setObjectName(QString::fromUtf8("login_ok_btn"));
        login_ok_btn->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:black;\n"
"background-color: white;"));

        horizontalLayout_3->addWidget(login_ok_btn);

        login_cancel_btn = new QPushButton(layoutWidget1);
        login_cancel_btn->setObjectName(QString::fromUtf8("login_cancel_btn"));
        login_cancel_btn->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:black;\n"
"background-color: white;"));

        horizontalLayout_3->addWidget(login_cancel_btn);


        retranslateUi(LoginAccount);

        QMetaObject::connectSlotsByName(LoginAccount);
    } // setupUi

    void retranslateUi(QWidget *LoginAccount)
    {
        LoginAccount->setWindowTitle(QApplication::translate("LoginAccount", "LoginAccount", nullptr));
        label->setText(QApplication::translate("LoginAccount", "Employee Login", nullptr));
        label_2->setText(QApplication::translate("LoginAccount", "Enter Employee Id", nullptr));
        login_ok_btn->setText(QApplication::translate("LoginAccount", "Login", nullptr));
        login_cancel_btn->setText(QApplication::translate("LoginAccount", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginAccount: public Ui_LoginAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINACCOUNT_H
