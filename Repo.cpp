#include "Repo.h"
#include <fstream>
#include <iostream>
#include <stdio.h>
using namespace std;

Repo::Repo(std::string fileName)
{
	this->fileName = fileName;
	this->readFromFile();
}

void Repo::readFromFile()
{
	ifstream file(this->fileName);

	if (!file.is_open())
		throw std::exception("Could not open file!");

	Time t;
	while (file >> t)
		this->intervals.push_back(t);

	file.close();
}
