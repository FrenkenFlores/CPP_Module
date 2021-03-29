#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

void printH(std::string header)
{
	std::cout	<< "\033[1;32m" << header << "\033[0m" << std::endl;
}

int main() {
	printH("Creating objects");
	Bureaucrat Adam("Adam", 145);
	Bureaucrat Jacob("Jacob", 137);
	ShrubberyCreationForm tree("tree");
	PresidentialPardonForm president("presindent");
	RobotomyRequestForm robot("robot");

	printH("ShrubberyCreationForm test");
	std::cout << Adam << Jacob;
	std::cout << tree;
	try {
		Adam.signForm(tree);
		Adam.executeForm(tree);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Adam.signForm(tree);
		Jacob.executeForm(tree);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	printH("PresidentialPardonForm test");
	Adam.setGrade(25);
	Jacob.setGrade(5);
	std::cout << Adam << Jacob;
	std::cout << president;
	try {
		Adam.signForm(president);
		Adam.executeForm(president);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Adam.signForm(president);
		Jacob.executeForm(president);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	printH("RobotomyRequestForm test");
	Adam.setGrade(72);
	Jacob.setGrade(45);
	std::cout << Adam << Jacob;
	std::cout << president;
	std::cout << robot;
	try {
		Adam.signForm(robot);
		Adam.executeForm(robot);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Adam.signForm(robot);
		Jacob.executeForm(robot);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}