#include "Bureaucrat.hpp"

void printH(std::string header)
{
	std::cout	<< "\033[1;32m" << header << "\033[0m" << std::endl;
}

int main() {
	printH("With no exception");
	try {
		Bureaucrat Tom("Tom", 75);
		std::cout << Tom;
		Tom.incrementGrade();
		std::cout << Tom;
		Tom.decrementGrade();
		std::cout << Tom;
	}
	catch(std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	printH("With high exception");
	try {
		Bureaucrat Adam("Adam", 1);
		std::cout << Adam;
		Adam.incrementGrade();
	}
	catch(std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	printH("With low exception");
	try {
		Bureaucrat Sali("Sali", 150);
		std::cout << Sali;
		Sali.decrementGrade();
	}
	catch(std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	printH("Constructor with low exception");
	try {
		Bureaucrat bob("Bob", 151);
		std::cout << bob;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	printH("Constructor with high exception");
	try {
		Bureaucrat Sara("Sara", 0);
		std::cout << Sara;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}