/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 06:06:14 by fflores           #+#    #+#             */
/*   Updated: 2021/03/30 06:06:15 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :
_name("name"), _signed(0), _gradeRequiredToSign(150), _gradeRequiredToExecute(150) {
	return;
}

Form::Form(std::string name, int signGrade, int executeGrade) :
_name(name), _signed(0), _gradeRequiredToSign(signGrade), _gradeRequiredToExecute(executeGrade) {
	if (_gradeRequiredToExecute < 1 || _gradeRequiredToSign < 1)
		throw GradeTooHighException();
	else if (_gradeRequiredToExecute > 150 || _gradeRequiredToSign > 150)
		throw GradeTooLowException();
	std::cout << "Form is been created" << std::endl;
	return;
}

Form::~Form() {
	std::cout << "Form is been destroyed" << std::endl;
	return;
}

Form::Form(const Form &src) :
_name(src._name), _signed(src._signed), _gradeRequiredToSign(src._gradeRequiredToSign), _gradeRequiredToExecute(src._gradeRequiredToExecute) {
	if (_gradeRequiredToExecute < 1 || _gradeRequiredToSign < 1)
		throw GradeTooHighException();
	else if (_gradeRequiredToExecute > 150 || _gradeRequiredToSign > 150)
		throw GradeTooLowException();
	std::cout << "Form is been copied" << std::endl;
	return;
}

Form & Form::operator=(const Form &rhs) {
	_signed = rhs._signed;
	if (_gradeRequiredToExecute < 1 || _gradeRequiredToSign < 1)
		throw GradeTooHighException();
	else if (_gradeRequiredToExecute > 150 || _gradeRequiredToSign > 150)
		throw GradeTooLowException();
	std::cout << "Form is been assigned" << std::endl;
	return *this;
}

std::ostream & operator<<(std::ostream &out, const Form &form)
{
	if (form.getSign())
		out << "Signed Form <" << form.getName()
			<< "> needs <" << form.getSignGrade()
			<< "> grades to be signed and <"
			<< form.getExecuteGrade()
			<< "> grades to be executed" << std::endl;
	else
		out << "Unsigned Form <" << form.getName()
			<< "> needs <" << form.getSignGrade()
			<< "> grades to be signed and <"
			<< form.getExecuteGrade()
			<< "> grades to be executed" << std::endl;
	return out;
}

std::string Form::getName() const{
	return _name;
}

void Form::beSigned(const Bureaucrat &target) {
	if (target.getGrade() > getSignGrade())
		throw GradeTooLowException();
	_signed = 1;
	return;
}

void Form::beUnsigned() {
	_signed = 0;
	return;
}

bool Form::getSign() const{
	return _signed;
}

int Form::getExecuteGrade() const{
	return _gradeRequiredToExecute;
}

int Form::getSignGrade() const{
	return _gradeRequiredToSign;
}