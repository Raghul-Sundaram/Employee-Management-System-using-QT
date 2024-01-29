#pragma once

#include <QWidget>
#include "ui_createAccount.h"
#include<QMessageBox>
#include<Windows.h>
#include<string>
#include<iostream>

using namespace std;

class createAccount : public QWidget
{
	Q_OBJECT

public:
	QString qid, qname, qtype, qage, qnum;
	createAccount(QWidget *parent = Q_NULLPTR);
	~createAccount();
	bool checkStatus();

	public slots:
	void saveDetails();
	void exitCreate();

private:
	Ui::createAccount ui;
};
