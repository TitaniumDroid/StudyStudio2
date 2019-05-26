#pragma once
#include "Definitions.h"

class Question
{
public:
	Question();
	~Question();
	std::string writeQuestion();
	std::string readQuestion();
private:
	std::string question;
};

