/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 06:06:09 by fflores           #+#    #+#             */
/*   Updated: 2021/03/30 06:06:09 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Default constructor called " << std::endl;
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
	std::cout << "Constructor called " << std::endl;
	return;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName()), _grade(src.getGrade()){
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
	std::cout << "Copy constructor called " << std::endl;

	return;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &rhs) {
	_grade = rhs._grade;
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
	std::cout << "Assignation operator called " << std::endl;
	return (*this);
}

std::ostream & operator<<(std::ostream &out, const Bureaucrat &src)
{
	out << "<" << src.getName() << "> has grade <" << src.getGrade() << ">" << std::endl;
	return (out);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor called " << std::endl;
	return;
}

std::string Bureaucrat::getName() const{
	return (_name);
}

int Bureaucrat::getGrade() const{
	return (_grade);
}

void Bureaucrat::incrementGrade() {
	_grade--;
	if (_grade < 1)
		throw GradeTooHighException();
	std::cout << "Grade been incremented and it equals " << getGrade() << std::endl;
	return;
}

void Bureaucrat::decrementGrade() {
	_grade++;
	if (_grade > 150)
		throw GradeTooLowException();
	std::cout << "Grade been decremented and it equals " << getGrade() << std::endl;
	return;
}

void Bureaucrat::signForm(Form &form) {
	if (_grade <= form.getSignGrade())
	{
		form.beSigned(*this);
		std::cout << "<" << _name << "> signs <" << form.getName() << ">" << std::endl;
	}
	else
		std::cout << "<" << _name << "> can't sign <" << form.getName() << "> because the form needs a higher grade" << std::endl;
	return;
}