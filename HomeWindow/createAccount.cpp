#include "createAccount.h"

createAccount::createAccount(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.ok_btn, &QPushButton::clicked, this, &createAccount::saveDetails);
	connect(ui.cancel_btn, &QPushButton::clicked, this, &createAccount::exitCreate);


}

createAccount::~createAccount()
{
}
bool createAccount::checkStatus()
{
	if (qid == NULL || qname == NULL || qage == NULL || qnum == NULL || qtype == NULL) {
		return false;
	}
	return true;

}
void createAccount::exitCreate()
{
	this->close();
}
void createAccount::saveDetails() {
	qid = ui.emp_id->text();			
	qname = ui.emp_name->text();
	qage = ui.emp_dob->text();
	qnum = ui.emp_number->text();
	qtype = ui.emp_type->currentText();
	if (!checkStatus()) {
		QMessageBox::warning(this, "Error", "Enter the Valid Data ");
	}
	else {
		string emp_id, name, emp_type, emp_age, ph_num;
		emp_id = qid.toStdString();
		name = qname.toStdString();
		emp_age = qage.toStdString();
		ph_num = qnum.toStdString();
		emp_type = qtype.toStdString();
		string Appname, Key, filename, Value;
		filename = ".\\Employee.ini";
		Appname = emp_id;
		Key = "Name";
		Value = name;
		WritePrivateProfileStringA(Appname.c_str(), Key.c_str(), Value.c_str(), filename.c_str());
		Key = "Date of Birth";
		Value = emp_age;
		WritePrivateProfileStringA(Appname.c_str(), Key.c_str(), Value.c_str(), filename.c_str());
		Key = "Employee type";
		Value = emp_type;
		WritePrivateProfileStringA(Appname.c_str(), Key.c_str(), Value.c_str(), filename.c_str());
		Key = "ph_number";
		Value = ph_num;
		WritePrivateProfileStringA(Appname.c_str(), Key.c_str(), Value.c_str(), filename.c_str());
		ui.emp_id->clear();
		ui.emp_name->clear();
		ui.emp_dob->clear();
		ui.emp_number->clear();
		ui.emp_type->setCurrentIndex(0);

		QMessageBox::information(this, "Message", "Employee Created Successfully!");
	}

}					