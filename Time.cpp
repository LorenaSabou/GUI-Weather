#include "Time.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

std::vector<std::string> tokenize(const std::string& str, char delimiter)
{
	vector<std::string>tokens;
	stringstream ss(str);
	string token;
	while (getline(ss, token, delimiter)) tokens.push_back(token);
	return tokens;
}

std::istream & operator >> (std::istream & is, Time & t)
{
	string line;
	getline(is, line);

	vector<string>tokens = tokenize(line, ';');

	if (size(tokens) != 5)
		return is;

	t.start = stoi(tokens[0]);
	t.end= stoi(tokens[1]);
	t.temp= stoi(tokens[2]);
	t.prec = stoi(tokens[3]);
	t.desc = tokens[4];
	return is;
}

