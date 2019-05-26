#pragma once
#include "Definitions.h"

class Course
{
public:
	Course();
	Course(std::string cF, std::string nm, char kW[]);
	~Course();
private:
	std::string courseFile;
	std::string name;
	char keyWord[3];
};

