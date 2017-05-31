#include "Controller.h"
#include <assert.h>

Controller::Controller(Repo _r)
{
	this->r = _r;
}

std::vector<Time> Controller::filterByPrec(int prec)
{
	std::vector<Time> all = getRepo();
	std::vector<Time> result;

	for (int i = 0; i < all.size(); i++) {
		if (all[i].getPrec() <= prec)
			result.push_back(all[i]);
	}
	return result;
}

int Controller::computeDuration(std::string desc)
{
	int total=0;
	std::vector<Time> all = getRepo();
	for (int i = 0; i < all.size(); i++) {
		if (all[i].getDesc() == desc)
			total += (all[i].getEnd() - all[i].getStart());
	}
	return total;
}

void Controller::test()
{
	/*White box test for function computeDuration*/
	int duration = this->computeDuration("foggy");
	assert(duration == 3);

	int duration2 = this->computeDuration("sunny");
	assert(duration2 == 5);
}
