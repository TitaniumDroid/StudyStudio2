#include "Course.h"

Course::Course()
{
}

Course::Course(std::string cF, std::string nm, char kW[]) {
	courseFile = cF;
	name = nm;
	keyWord[1] = kW[1];
	keyWord[2] = kW[2];
	keyWord[3] = kW[3];
}

Course::~Course()
{
}
