#include "userDetails.h"

userDetails::userDetails(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.show_item_widget->hide();
	ui.comboBox_2->hide();


	connect(ui.details_edit_btn, &QPushButton::clicked, this, &userDetails::ShowEditDetails);
	connect(ui.details_ok_btn, &QPushButton::clicked, this, &userDetails::editDetails);
	connect(ui.details_cancel_btn, &QPushButton::clicked, this, &userDetails::cancelEditDetails);
	connect(ui.delete_btn, &QPushButton::clicked, this, &userDetails::deleteDetails);
	connect(ui.comboBox, &QComboBox::currentTextChanged, this, &userDetails::getEditData);

}

userDetails::~userDetails()
{
}

void userDetails::setUserData(QString s)
{
	

	QString name, type, dob, number;
	Appname = s.toStdString();

	Key = "Name";
	char nameres[100];
	int num = GetPrivateProfileStringA(Appname.c_str(),Key.c_str()," ", nameres, sizeof(nameres), filename.c_str());
	string r(nameres);
	name = QString::fromStdString(r);
	ui.emp_name->setText(name);
	ui.title_label->setText("Welcome " + name+" ("+s+")");

	Key = "Date of Birth";
	char dobres[100];
	GetPrivateProfileStringA(Appname.c_str(), Key.c_str(), " ", dobres, sizeof(dobres), filename.c_str());
	string d(dobres);
	dob = QString::fromStdString(d);
	ui.emp_dob->setText(dob);
	

	Key = "Employee type";
	char typeres[100];
	GetPrivateProfileStringA(Appname.c_str(), Key.c_str(), " ", typeres, sizeof(typeres), filename.c_str());
	string t(typeres);
	type = QString::fromStdString(t);
	ui.emp_type->setText(type);

	Key = "ph_number";
	char numres[100];
	GetPrivateProfileStringA(Appname.c_str(), Key.c_str(), " ", numres, sizeof(numres), filename.c_str());
	string n(numres);
	number = QString::fromStdString(n);
	ui.emp_number->setText(number);

	ui.emp_id->setText(s);
	

}
void userDetails::ShowEditDetails() {
	ui.show_item_widget->show();
	

}

void userDetails::editDetails() {
	Key = ui.comboBox->currentText().toStdString();
	if (Key == "Employee type") {
		Value = ui.comboBox_2->currentText().toStdString();
	}
	else {
		Value = ui.lineEdit->text().toStdString();
	}

	WritePrivateProfileStringA(Appname.c_str(), Key.c_str(), Value.c_str(), filename.c_str());


	int rt = QMessageBox::information(this, "Message", "Details Edited Successfuly",QMessageBox::Ok);
	if (rt == QMessageBox::Ok) {
		this->close();
	}

	ui.comboBox->setCurrentIndex(0);
	ui.lineEdit->clear();
	ui.emp_dob->clear();
	ui.emp_id->clear();
	ui.emp_name->clear();
	ui.emp_number->clear();
	ui.emp_type->clear();

}

void userDetails::cancelEditDetails()
{
	ui.show_item_widget->hide();
}

void userDetails::deleteDetails()
{
	string del_id = Appname;
	int rt;
	if (WritePrivateProfileStringA(Appname.c_str(), NULL, NULL, filename.c_str())) {
		rt = QMessageBox::information(this, "Message", "Employee Deleted Successfully!", QMessageBox::Ok);

	}

	ui.comboBox->setCurrentIndex(0);
	ui.lineEdit->clear();
	ui.emp_dob->clear();
	ui.emp_id->clear();
	ui.emp_name->clear();
	ui.emp_number->clear();
	ui.emp_type->clear();
	if (rt == QMessageBox::Ok) {
		this->close();
	}
}

void userDetails::getEditData()
{
	QString s = ui.comboBox->currentText();
	if (s == "Employee type") {
		ui.lineEdit->hide();
		ui.comboBox_2->show();
		ui.showwidget->layout()->addWidget(ui.comboBox_2);
	}
}


