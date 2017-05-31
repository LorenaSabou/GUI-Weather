#pragma once
#include "Repo.h"

class Controller {
private:
	Repo r;
public:
	Controller(Repo _r);
	~Controller() {};

	std::vector<Time>& getRepo() { return this->r.getIntervals(); };
	/*
	Function which filters the intervals by precipitation
	Input: precipitation-integer
	Output: a new vector consisting only of matches
	*/
	std::vector<Time> filterByPrec(int prec);
	/*
	Computes the total no. of hours for a given weather (sunny,rainy,etc)
	Input: description- string
	Output: total hours matching description -integer
	*/
	int computeDuration(std::string desc);
	void test();
};