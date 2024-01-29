#include "HomeWindow.h"
createAccount *CA;
LoginAccount *LA;
HomeWindow::HomeWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.login_btn, &QPushButton::clicked, this,&HomeWindow::showLogin);
	connect(ui.create_btn, &QPushButton::clicked, this, &HomeWindow::showCreate);
	connect(ui.quit_btn, &QPushButton::clicked, this, &HomeWindow::exitApp);
}

void HomeWindow::showLogin() {
	LA = new LoginAccount(this);
	if (open == 0) {
		LA->show();
		LA->loadId();
		ui.main_widget->setLayout(new QHBoxLayout);
		ui.main_widget->layout()->addWidget(LA);
		open++;
	}
	else {
		CA->hide();
		LA->show();
		LA->loadId();
		ui.main_widget->setLayout(new QHBoxLayout);
		ui.main_widget->layout()->addWidget(LA);
	}

}

void HomeWindow::showCreate()
{
	CA = new createAccount(this);
	if (open == 0) {
		CA->show();
		ui.main_widget->setLayout(new QHBoxLayout);
		ui.main_widget->layout()->addWidget(CA);
		open++;
	}
	else {
		LA->hide();
		CA->show();
		ui.main_widget->setLayout(new QHBoxLayout);
		ui.main_widget->layout()->addWidget(CA);
	}

	
}

void HomeWindow::exitApp()
{
	QApplication::exit();
}

