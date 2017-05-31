#ifndef TEST_3_H
#define TEST_3_H
#include "Controller.h"

#include <QtWidgets/QMainWindow>
#include "ui_test_3.h"

class Test_3 : public QMainWindow
{
	Q_OBJECT

public:
	Test_3(Controller& c, QWidget *parent = 0);
	~Test_3();

public slots:
	void compute();
	void filter();
	void comeBack();
private:
	Ui::Test_3Class ui;
	Controller& c;
	std::vector<Time> current_list;
	void populate();
	void connect_signals();

};

#endif // TEST_3_H
