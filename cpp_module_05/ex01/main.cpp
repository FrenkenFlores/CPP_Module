/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 06:06:22 by fflores           #+#    #+#             */
/*   Updated: 2021/03/30 06:06:22 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void printH(std::string header)
{
	std::cout	<< "\033[1;32m" << header << "\033[0m" << std::endl;
}

int main() {
	printH("Creating objects");
	Bureaucrat Adam("Adam", 48);
	Bureaucrat Jacob("Jacob", 45);
	Form form1("28C", 33, 11);
	Form form2("13B", 45, 45);
	Form form0("0H", 47, 47);
	std::cout << Adam << Jacob;
	std::cout << form0 << form1 << form2;
	printH("Signing forms without exceptions");
	try {
		Adam.signForm(form1);
		std::cout << form1;
		Adam.signForm(form0);
		std::cout << form0;
		Adam.incrementGrade();
		Adam.signForm(form0);
		std::cout << form0;
		Jacob.signForm(form2);
		std::cout << form2;
		Jacob.decrementGrade();
		form2.beUnsigned();
		Jacob.signForm(form2);
		std::cout << form2;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	printH("Creating form with an exception");
	try {
		Form form3("99G", 200, 100);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try {
		Form form3("99G", 100, 200);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try {
		Form form3("99G", 0, 100);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try {
		Form form3("99G", 100, 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	printH("Destroying objects");
	return (0);
}