/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 06:14:15 by fflores           #+#    #+#             */
/*   Updated: 2021/03/30 06:14:16 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>
#include <exception>

#define NUMBER_OF_FORMS 3

class Intern
{
public:
	Intern();
	Intern(const Intern &src);
	Intern &operator=(const Intern &rhs);
	~Intern();
	Form *makeForm(std::string formName, std::string target);
	struct UnkownFormException : std::exception
	{
		const char *what() const throw() {
			return ("UnknowFormException");
		}
	};
	void pushForm(Form *form, std::string formName);
private:
	class _formTemplate {
	public:
		std::string formName;
		Form *form;
	};
	_formTemplate _formArray[NUMBER_OF_FORMS];
};


#endif