#include <iostream>	// cout and cin
#include <fstream>	// file input and output
#include <conio.h>	// WaitKey
#include <cstdlib>	// random number generator
#include <ctime>	// time for random number generator

// Classes
#include "Definitions.h"
#include "Answer.h"
#include "Course.h"
#include "Question.h"

// Function declaration
void OutQuesAnsw(std::string st);
void WaitKey();

std::ifstream in_file;

int main()
{
	// system initialization
	system("color F0");

	//variable definitions
	std::string key;	// keyword input from the user

	// Initial input (with help function)
	std::cout << "\n\n\n\t\t" << "What do you want to study today? (If you dont remember the option, type 'help')" << std::endl;
	std::cin >> key;

	// Searching for keyWords

	// Opening course, checking for chapters

	// Randomizing Q&A

	// CSV file system


	return 0;
}

std::string searchKeyWord() {
	in_file.open("keyWord.txt", std::ios::in);
	std::string keyWord;
	std::cin >> keyWord;
	while(keyWord)
}

void OutQuesAnsw(std::string st) {

}

void WaitKey() {

}