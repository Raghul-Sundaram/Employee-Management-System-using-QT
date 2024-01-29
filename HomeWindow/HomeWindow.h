#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_HomeWindow.h"
#include "createAccount.h"
#include "LoginAccount.h"

class HomeWindow : public QMainWindow
{
	Q_OBJECT

public:
	int open = 0;
	HomeWindow(QWidget *parent = Q_NULLPTR);

	public slots:
	void showLogin();
	void showCreate();
	void exitApp();

private:
	Ui::HomeWindowClass ui;
};
