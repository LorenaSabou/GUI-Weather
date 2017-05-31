#pragma once
#include "Time.h"
#include <iostream>
#include <vector>

class Repo {
private:
	std::vector<Time> intervals;
	std::string fileName;
public:
	Repo() {};
	Repo(std::string fileName);
	~Repo() {};
	void readFromFile();
	std::vector<Time>& getIntervals() { return this->intervals; };

};