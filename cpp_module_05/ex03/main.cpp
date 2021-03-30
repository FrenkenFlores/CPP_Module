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
	Form* form1;
	try {
		form1 = bob.makeForm("robotomy request","Bob");
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		form1 = bob.makeForm("presidential pardon","Jack");
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}try {
		form1 = bob.makeForm("shrubbery creation","Adam");
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	Form* form2;
	try {
		form2 = bob.makeForm("Billy", "Bob");
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}