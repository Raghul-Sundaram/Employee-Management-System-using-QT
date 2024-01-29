#include "LoginAccount.h"

LoginAccount::LoginAccount(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.login_ok_btn, &QPushButton::clicked, this, &LoginAccount::showUserDetails);
	connect(ui.login_cancel_btn, &QPushButton::clicked, this, &LoginAccount::exitLogin);


}

LoginAccount::~LoginAccount()
{
}



void LoginAccount::showUserDetails() {
	userDetails UD;
	QString id = ui.login_emp_id->currentText();
	int ret = checkId(id.toStdString());
	if (ret == 1) {
		UD.setUserData(id);
		UD.exec();
	}
	else {
		QMessageBox::warning(this, "Details Not Found", "Entered Employee ID Is Not Valid!");
	}
	
}
void LoginAccount::loadId()
{
	LoginAccount login;
	string filename = ".\\Employee.ini";
	char res[100];
	int n = GetPrivateProfileSectionNamesA(res, sizeof(res), filename.c_str());
	string str = " ";
	for (int i = 0; i < n; i++) {
		if (res[i] == '\0') {
			list.push_back(str);
			str = " ";
		}
		else {
			str = str + res[i];
		}
	}
	for (string i : list) {
		ui.login_emp_id->addItem(QString::fromStdString(i));
	}
}
int LoginAccount::checkId(string id)
{
	for (string i : list) {
		if (i == id) {
			return 1;
		}

	}
	return 0;
}

void LoginAccount::exitLogin()
{
	this->close();
}


