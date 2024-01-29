#pragma once

#include <QWidget>
#include "ui_userDetails.h"
#include<qdialog.h>

#include<string>
#include<iostream>
#include<Windows.h>
#include<QMessageBox>
using namespace std;
class userDetails : public QDialog
{
	Q_OBJECT

public:
	string Appname, Key, filename = ".\\Employee.ini", Value;
	userDetails(QWidget *parent = Q_NULLPTR);
	~userDetails();

	void setUserData(QString s);
	public slots:
	void ShowEditDetails();
	void editDetails();
	void cancelEditDetails();
	void deleteDetails();
	void getEditData();

private:
	Ui::userDetails ui;
};
