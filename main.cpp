#include "test_3.h"
#include <QtWidgets/QApplication>
#include "Controller.h"


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Repo r("input.txt");
	Controller c(r);
	Test_3 w(c);
	w.show();
	return a.exec();
}
