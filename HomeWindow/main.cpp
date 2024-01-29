#include "HomeWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	HomeWindow w;
	w.show();
	return a.exec();
}
