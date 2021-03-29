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

	std::cout << Adam << Jacob;
	printH("ShrubberyCreationForm test");
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
//	printH("Signing forms without exceptions");
//	try {
//		Adam.signForm(form1);
//		std::cout << form1;
//		Adam.signForm(form0);
//		std::cout << form0;
//		Adam.incrementGrade();
//		Adam.signForm(form0);
//		std::cout << form0;
//		Jacob.signForm(form2);
//		std::cout << form2;
//		Jacob.decrementGrade();
//		form2.beUnsigned();
//		Jacob.signForm(form2);
//		std::cout << form2;
//	}
//	catch (std::exception &e) {
//		std::cerr << e.what() << std::endl;
//	}
//	printH("Creating form with an exception");
//	try {
//		Form form3("99G", 200, 100);
//	}
//	catch (std::exception &e)
//	{
//		std::cerr << e.what() << std::endl;
//	}
//	try {
//		Form form3("99G", 100, 200);
//	}
//	catch (std::exception &e)
//	{
//		std::cerr << e.what() << std::endl;
//	}
//	try {
//		Form form3("99G", 0, 100);
//	}
//	catch (std::exception &e)
//	{
//		std::cerr << e.what() << std::endl;
//	}
//	try {
//		Form form3("99G", 100, 0);
//	}
//	catch (std::exception &e)
//	{
//		std::cerr << e.what() << std::endl;
//	}
//	printH("Destroying objects");
	return (0);
}