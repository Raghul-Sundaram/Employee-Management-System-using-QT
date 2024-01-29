/********************************************************************************
** Form generated from reading UI file 'HomeWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEWINDOW_H
#define UI_HOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeWindowClass
{
public:
    QAction *actionDark;
    QAction *actionLight;
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *quit_btn;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *login_btn;
    QPushButton *create_btn;
    QWidget *main_widget;
    QMenuBar *menuBar;
    QMenu *menuSettings;
    QMenu *menuTheme;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HomeWindowClass)
    {
        if (HomeWindowClass->objectName().isEmpty())
            HomeWindowClass->setObjectName(QString::fromUtf8("HomeWindowClass"));
        HomeWindowClass->resize(1904, 1019);
        HomeWindowClass->setStyleSheet(QString::fromUtf8("#centralWidget {\n"
"\n"
"	background-color: rgb(149, 99, 74);\n"
"}"));
        actionDark = new QAction(HomeWindowClass);
        actionDark->setObjectName(QString::fromUtf8("actionDark"));
        actionLight = new QAction(HomeWindowClass);
        actionLight->setObjectName(QString::fromUtf8("actionLight"));
        centralWidget = new QWidget(HomeWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(730, 20, 421, 81));
        label->setStyleSheet(QString::fromUtf8("font-size:30px;\n"
"color:white;"));
        quit_btn = new QPushButton(centralWidget);
        quit_btn->setObjectName(QString::fromUtf8("quit_btn"));
        quit_btn->setGeometry(QRect(860, 910, 75, 41));
        quit_btn->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:black;\n"
"background-color: white;"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(640, 150, 611, 50));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(100);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        login_btn = new QPushButton(widget);
        login_btn->setObjectName(QString::fromUtf8("login_btn"));
        login_btn->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:black;\n"
"background-color: white;"));

        horizontalLayout->addWidget(login_btn);

        create_btn = new QPushButton(widget);
        create_btn->setObjectName(QString::fromUtf8("create_btn"));
        create_btn->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:black;\n"
"background-color: white;"));

        horizontalLayout->addWidget(create_btn);

        main_widget = new QWidget(centralWidget);
        main_widget->setObjectName(QString::fromUtf8("main_widget"));
        main_widget->setGeometry(QRect(690, 280, 781, 541));
        HomeWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HomeWindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1904, 21));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuTheme = new QMenu(menuSettings);
        menuTheme->setObjectName(QString::fromUtf8("menuTheme"));
        HomeWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HomeWindowClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        HomeWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HomeWindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        HomeWindowClass->setStatusBar(statusBar);

        menuBar->addAction(menuSettings->menuAction());
        menuSettings->addAction(menuTheme->menuAction());
        menuTheme->addAction(actionDark);
        menuTheme->addAction(actionLight);

        retranslateUi(HomeWindowClass);

        QMetaObject::connectSlotsByName(HomeWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *HomeWindowClass)
    {
        HomeWindowClass->setWindowTitle(QApplication::translate("HomeWindowClass", "HomeWindow", nullptr));
        actionDark->setText(QApplication::translate("HomeWindowClass", "Dark", nullptr));
        actionLight->setText(QApplication::translate("HomeWindowClass", "Light", nullptr));
        label->setText(QApplication::translate("HomeWindowClass", "Employee Management System", nullptr));
        quit_btn->setText(QApplication::translate("HomeWindowClass", "Quit", nullptr));
        login_btn->setText(QApplication::translate("HomeWindowClass", "Login", nullptr));
        create_btn->setText(QApplication::translate("HomeWindowClass", "Create Account", nullptr));
        menuSettings->setTitle(QApplication::translate("HomeWindowClass", "Settings", nullptr));
        menuTheme->setTitle(QApplication::translate("HomeWindowClass", "Theme", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomeWindowClass: public Ui_HomeWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWINDOW_H
