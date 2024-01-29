/********************************************************************************
** Form generated from reading UI file 'userDetails.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDETAILS_H
#define UI_USERDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userDetails
{
public:
    QWidget *widget_2;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *emp_name;
    QLabel *label_2;
    QLineEdit *emp_id;
    QLabel *label_7;
    QLineEdit *emp_type;
    QLabel *label_5;
    QLineEdit *emp_dob;
    QLabel *label_6;
    QLineEdit *emp_number;
    QWidget *widget_3;
    QPushButton *details_edit_btn;
    QPushButton *delete_btn;
    QWidget *show_item_widget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *comboBox;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *details_ok_btn;
    QPushButton *details_cancel_btn;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QWidget *showwidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QWidget *list_widget;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox_2;
    QWidget *widget;
    QLabel *title_label;

    void setupUi(QWidget *userDetails)
    {
        if (userDetails->objectName().isEmpty())
            userDetails->setObjectName(QString::fromUtf8("userDetails"));
        userDetails->resize(827, 970);
        userDetails->setStyleSheet(QString::fromUtf8("#userDetails {\n"
"background-color: rgb(149, 99, 74);\n"
"}"));
        widget_2 = new QWidget(userDetails);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(280, 250, 302, 341));
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
        emp_name->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border:1px solid white ;\n"
"color: rgb(255, 255, 255);"));
        emp_name->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, emp_name);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:white;"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        emp_id = new QLineEdit(widget_2);
        emp_id->setObjectName(QString::fromUtf8("emp_id"));
        emp_id->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border:1px solid white ;\n"
"color: rgb(255, 255, 255);"));
        emp_id->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, emp_id);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:white;"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        emp_type = new QLineEdit(widget_2);
        emp_type->setObjectName(QString::fromUtf8("emp_type"));
        emp_type->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border:1px solid white ;\n"
"color: rgb(255, 255, 255);"));
        emp_type->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, emp_type);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:white;"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_5);

        emp_dob = new QLineEdit(widget_2);
        emp_dob->setObjectName(QString::fromUtf8("emp_dob"));
        emp_dob->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border:1px solid white ;\n"
"color: rgb(255, 255, 255);"));
        emp_dob->setReadOnly(true);

        formLayout->setWidget(6, QFormLayout::FieldRole, emp_dob);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:white;"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_6);

        emp_number = new QLineEdit(widget_2);
        emp_number->setObjectName(QString::fromUtf8("emp_number"));
        emp_number->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border:1px solid white ;\n"
"color: rgb(255, 255, 255);"));
        emp_number->setReadOnly(true);

        formLayout->setWidget(8, QFormLayout::FieldRole, emp_number);

        widget_3 = new QWidget(userDetails);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(310, 620, 231, 41));
        details_edit_btn = new QPushButton(widget_3);
        details_edit_btn->setObjectName(QString::fromUtf8("details_edit_btn"));
        details_edit_btn->setGeometry(QRect(9, 9, 81, 31));
        details_edit_btn->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:black;\n"
"background-color: white;"));
        delete_btn = new QPushButton(widget_3);
        delete_btn->setObjectName(QString::fromUtf8("delete_btn"));
        delete_btn->setGeometry(QRect(146, 9, 81, 31));
        delete_btn->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(135, 0, 0);"));
        show_item_widget = new QWidget(userDetails);
        show_item_widget->setObjectName(QString::fromUtf8("show_item_widget"));
        show_item_widget->setGeometry(QRect(180, 720, 471, 251));
        layoutWidget = new QWidget(show_item_widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 10, 399, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(24);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:white;"));

        horizontalLayout->addWidget(label_4);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        layoutWidget1 = new QWidget(show_item_widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(100, 140, 251, 34));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        details_ok_btn = new QPushButton(layoutWidget1);
        details_ok_btn->setObjectName(QString::fromUtf8("details_ok_btn"));
        details_ok_btn->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:black;\n"
"background-color: white;"));

        horizontalLayout_3->addWidget(details_ok_btn);

        details_cancel_btn = new QPushButton(layoutWidget1);
        details_cancel_btn->setObjectName(QString::fromUtf8("details_cancel_btn"));
        details_cancel_btn->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:black;\n"
"background-color: white;"));

        horizontalLayout_3->addWidget(details_cancel_btn);

        layoutWidget2 = new QWidget(show_item_widget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 60, 391, 40));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(88);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:white;"));

        horizontalLayout_2->addWidget(label_8);

        showwidget = new QWidget(layoutWidget2);
        showwidget->setObjectName(QString::fromUtf8("showwidget"));
        verticalLayout_2 = new QVBoxLayout(showwidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit = new QLineEdit(showwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);


        horizontalLayout_2->addWidget(showwidget);

        list_widget = new QWidget(userDetails);
        list_widget->setObjectName(QString::fromUtf8("list_widget"));
        list_widget->setGeometry(QRect(440, 680, 171, 38));
        verticalLayout = new QVBoxLayout(list_widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        comboBox_2 = new QComboBox(list_widget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        verticalLayout->addWidget(comboBox_2);

        widget = new QWidget(userDetails);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(-10, -20, 851, 231));
        widget->setStyleSheet(QString::fromUtf8(""));
        title_label = new QLabel(widget);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(260, 80, 561, 71));
        title_label->setStyleSheet(QString::fromUtf8("font-size:30px;\n"
"color:white;"));

        retranslateUi(userDetails);

        QMetaObject::connectSlotsByName(userDetails);
    } // setupUi

    void retranslateUi(QWidget *userDetails)
    {
        userDetails->setWindowTitle(QApplication::translate("userDetails", "userDetails", nullptr));
        label_3->setText(QApplication::translate("userDetails", "Employee Name", nullptr));
        label_2->setText(QApplication::translate("userDetails", "Employee Id", nullptr));
        label_7->setText(QApplication::translate("userDetails", "Employee Type", nullptr));
        label_5->setText(QApplication::translate("userDetails", "Date Of Birth", nullptr));
        label_6->setText(QApplication::translate("userDetails", "Phone Number", nullptr));
        details_edit_btn->setText(QApplication::translate("userDetails", "Edit", nullptr));
        delete_btn->setText(QApplication::translate("userDetails", "Delete", nullptr));
        label_4->setText(QApplication::translate("userDetails", "Which one Do you want to Edit", nullptr));
        comboBox->setItemText(0, QApplication::translate("userDetails", "select", nullptr));
        comboBox->setItemText(1, QApplication::translate("userDetails", "Name", nullptr));
        comboBox->setItemText(2, QApplication::translate("userDetails", "Employee type", nullptr));
        comboBox->setItemText(3, QApplication::translate("userDetails", "Date Of Birth", nullptr));
        comboBox->setItemText(4, QApplication::translate("userDetails", "ph_number", nullptr));

        details_ok_btn->setText(QApplication::translate("userDetails", "OK", nullptr));
        details_cancel_btn->setText(QApplication::translate("userDetails", "Cancel", nullptr));
        label_8->setText(QApplication::translate("userDetails", "Enter the New Data", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("userDetails", "select", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("userDetails", "Developer", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("userDetails", "Tester", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("userDetails", "Manager", nullptr));
        comboBox_2->setItemText(4, QApplication::translate("userDetails", "Intern", nullptr));

        title_label->setText(QApplication::translate("userDetails", "Welcome username!..", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userDetails: public Ui_userDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDETAILS_H
