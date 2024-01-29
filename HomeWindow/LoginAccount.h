#pragma once

#include <QWidget>
#include "ui_LoginAccount.h"
#include "userDetails.h"
class LoginAccount : public QWidget
{
	Q_OBJECT

public:
	LoginAccount(QWidget *parent = Q_NULLPTR);
	~LoginAccount();
	int checkId(string id);
	void loadId();
	vector<string> list;


	public slots:
	void showUserDetails();
	void exitLogin();

private:
	Ui::LoginAccount ui;
};
