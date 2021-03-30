/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 06:14:18 by fflores           #+#    #+#             */
/*   Updated: 2021/03/30 06:14:19 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	Form *robotoMyRequest = new RobotomyRequestForm();
	Form *shrubberyCreation = new ShrubberyCreationForm();
	Form *presidentialPardon = new PresidentialPardonForm();

	pushForm(robotoMyRequest, "robotomy request");
	pushForm(shrubberyCreation, "presidential pardon");
	pushForm(presidentialPardon, "shrubbery creation");
	return;
}

void Intern::pushForm(Form *form, std::string formName) {
	static  int i = 0;
	_formArray[i % NUMBER_OF_FORMS].form = form;
	_formArray[i++ % NUMBER_OF_FORMS].formName = formName;
	return;
}

Intern::Intern(const Intern &src) {
	*this = src;
	return;
}

Intern & Intern::operator=(const Intern &rhs) {
	for (int i = 0; i < NUMBER_OF_FORMS; ++i) {
		_formArray[i].formName = rhs._formArray[i].formName;
	}
	return (*this);
}

Intern::~Intern() {
	for (int i = 0; i < NUMBER_OF_FORMS; ++i) {
		delete _formArray[i].form;
	}
	return;
}

Form * Intern::makeForm(std::string formName, std::string target) {
	for (int i = 0; i < NUMBER_OF_FORMS; ++i) {
		if (_formArray[i].formName == formName)
		{
			_formArray[i].form->setTarget(target);
			std::cout << "Intern creates a " << _formArray[i].formName << " that have a target " << _formArray[i].form->getTarget() << std::endl;
			return _formArray[i].form;
		}
	}
	throw UnkownFormException();
}
