/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 06:06:33 by fflores           #+#    #+#             */
/*   Updated: 2021/03/30 06:06:34 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void) {
	Intern bob;
	Bureaucrat Adam("Adam", 40);
	Bureaucrat Jacob("Jacob", 1);
	Form *form1;
	Form *form2;
	Form *form3;
	try {
		form1 = bob.makeForm("robotomy request","robo");
		Adam.signForm(*form1);
		Jacob.executeForm(*form1);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		form2 = bob.makeForm("presidential pardon","pres");
		Adam.signForm(*form2);
		Jacob.executeForm(*form2);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		form3 = bob.makeForm("shrubbery creation","tree");
		Adam.signForm(*form3);
		Jacob.executeForm(*form3);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	Form* form4;
	try {
		form4 = bob.makeForm("Billy", "Bob");
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}