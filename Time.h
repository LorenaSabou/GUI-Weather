#pragma once
#include <iostream>

class Time {
private:
	int start;
	int end;
	int temp;
	int prec;
	std::string desc;
public:
	Time() {};
	Time(int h, int t, int p, std::string d);
	~Time() {};

	int getStart() const { return this->start; };
	int getEnd() const { return this->end; };
	int getTemp() const { return this->temp; };
	int getPrec() const { return this->prec; };
	std::string getDesc() const { return this->desc; };
	friend std::istream& operator >> (std::istream& is, Time& t);


};
