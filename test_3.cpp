#include "test_3.h"
#include "qmessagebox.h"
Test_3::Test_3(Controller& _c, QWidget *parent)
	: c(_c), QMainWindow(parent)
{
	ui.setupUi(this);
	this->ui.title->setText("<font color='white'>DAILY WEATHER</font>");
	this->current_list = this->c.getRepo();
	this->populate();
	this->connect_signals();
}

Test_3::~Test_3()
{

}

void Test_3::populate()
{	
	this->ui.listWidget->clear();
	QFont f("Edwardian Script ITC", 20);
	for (Time t : this->current_list) {
		QString info = "Time(hour): " +QString::number(t.getStart()) + "->" + QString::number(t.getEnd()) + " |Temperature: " + QString::number(t.getTemp()) +"  |Type: "+ QString::fromStdString(t.getDesc());
		this->ui.listWidget->addItem(info);
		this->ui.listWidget->setFont(f);
	}
}

void Test_3::filter() {
	this->ui.listWidget->clear();
	QString prec = this->ui.precipitationEdit->text();
	int p = prec.toInt();
	this->current_list = this->c.filterByPrec(p);
	populate();
}

void Test_3::connect_signals() {
	connect(this->ui.filterButton, &QPushButton::clicked, this, &Test_3::filter);
	connect(this->ui.returnButton, &QPushButton::clicked, this, &Test_3::comeBack);
	connect(this->ui.hourButton, &QPushButton::clicked, this, &Test_3::compute);

}

void Test_3::comeBack() {
	this->ui.listWidget->clear();
	this->current_list = this->c.getRepo();
	populate();
}

void Test_3::compute() {
	QString desc = this->ui.descriptionEdit->text();
	std::string descr = desc.toStdString();
	int result = this->c.computeDuration(descr);

	QMessageBox* prompt = new QMessageBox{};
	prompt->setText("Total duration:" + QString::number(result));
	prompt->setWindowTitle("Duration");
	prompt->show();
}