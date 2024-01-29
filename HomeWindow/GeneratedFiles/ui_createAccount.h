/********************************************************************************
** Form generated from reading UI file 'createAccount.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEACCOUNT_H
#define UI_CREATEACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createAccount
{
public:
    QWidget *widget;
    QWidget *widget_2;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *emp_name;
    QLabel *label_2;
    QLineEdit *emp_id;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *emp_number;
    QLabel *label_7;
    QComboBox *emp_type;
    QDateEdit *emp_dob;
    QWidget *widget_3;
    QPushButton *ok_btn;
    QPushButton *cancel_btn;
    QLabel *label_4;

    void setupUi(QWidget *createAccount)
    {
        if (createAccount->objectName().isEmpty())
            createAccount->setObjectName(QString::fromUtf8("createAccount"));
        createAccount->resize(427, 490);
        widget = new QWidget(createAccount);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 421, 481));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(60, 80, 302, 341));
        formLayout = new QFormLayout(widget_2);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setVerticalSpacing(24);
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:white;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        emp_name = new QLineEdit(widget_2);
        emp_name->setObjectName(QString::fromUtf8("emp_name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, emp_name);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:white;"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        emp_id = new QLineEdit(widget_2);
        emp_id->setObjectName(QString::fromUtf8("emp_id"));

        formLayout->setWidget(2, QFormLayout::FieldRole, emp_id);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:white;"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:white;"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_6);

        emp_number = new QLineEdit(widget_2);
        emp_number->setObjectName(QString::fromUtf8("emp_number"));

        formLayout->setWidget(8, QFormLayout::FieldRole, emp_number);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:white;"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        emp_type = new QComboBox(widget_2);
        emp_type->addItem(QString());
        emp_type->addItem(QString());
        emp_type->addItem(QString());
        emp_type->addItem(QString());
        emp_type->addItem(QString());
        emp_type->setObjectName(QString::fromUtf8("emp_type"));

        formLayout->setWidget(4, QFormLayout::FieldRole, emp_type);

        emp_dob = new QDateEdit(widget_2);
        emp_dob->setObjectName(QString::fromUtf8("emp_dob"));

        formLayout->setWidget(6, QFormLayout::FieldRole, emp_dob);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(90, 440, 231, 41));
        ok_btn = new QPushButton(widget_3);
        ok_btn->setObjectName(QString::fromUtf8("ok_btn"));
        ok_btn->setGeometry(QRect(9, 9, 75, 23));
        ok_btn->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:black;\n"
"background-color: white;"));
        cancel_btn = new QPushButton(widget_3);
        cancel_btn->setObjectName(QString::fromUtf8("cancel_btn"));
        cancel_btn->setGeometry(QRect(146, 9, 75, 23));
        cancel_btn->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:black;\n"
"background-color: white;"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 0, 231, 61));
        label_4->setStyleSheet(QString::fromUtf8("font-size:30px;\n"
"color:white;"));

        retranslateUi(createAccount);

        QMetaObject::connectSlotsByName(createAccount);
    } // setupUi

    void retranslateUi(QWidget *createAccount)
    {
        createAccount->setWindowTitle(QApplication::translate("createAccount", "createAccount", nullptr));
        label_3->setText(QApplication::translate("createAccount", "Employee Name", nullptr));
        label_2->setText(QApplication::translate("createAccount", "Employee Id", nullptr));
        label_5->setText(QApplication::translate("createAccount", "Date Of Birth", nullptr));
        label_6->setText(QApplication::translate("createAccount", "Phone Number", nullptr));
        label_7->setText(QApplication::translate("createAccount", "Employee Type", nullptr));
        emp_type->setItemText(0, QApplication::translate("createAccount", "Select", nullptr));
        emp_type->setItemText(1, QApplication::translate("createAccount", "Developer", nullptr));
        emp_type->setItemText(2, QApplication::translate("createAccount", "Tester", nullptr));
        emp_type->setItemText(3, QApplication::translate("createAccount", "Intern", nullptr));
        emp_type->setItemText(4, QApplication::translate("createAccount", "Manager", nullptr));

        ok_btn->setText(QApplication::translate("createAccount", "Save", nullptr));
        cancel_btn->setText(QApplication::translate("createAccount", "Cancel", nullptr));
        label_4->setText(QApplication::translate("createAccount", "Create Employee", nullptr));
    } // retranslateUi

};

namespace Ui {
    class createAccount: public Ui_createAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEACCOUNT_H
