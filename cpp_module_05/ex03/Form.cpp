/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 06:06:29 by fflores           #+#    #+#             */
/*   Updated: 2021/03/30 06:06:29 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :
_target(""), _signed(0), _gradeRequiredToSign(150), _gradeRequiredToExecute(150) {
	return;
}

Form::Form(std::string target, int signGrade, int executeGrade) :
_target(target), _signed(0), _gradeRequiredToSign(signGrade), _gradeRequiredToExecute(executeGrade) {
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
_target(src._target), _signed(src._signed), _gradeRequiredToSign(src._gradeRequiredToSign), _gradeRequiredToExecute(src._gradeRequiredToExecute) {
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
		out << "Signed Form <" << form.getTarget()
			<< "> needs <" << form.getSignGrade()
			<< "> grades to be signed and <"
			<< form.getExecuteGrade()
			<< "> grades to be executed" << std::endl;
	else
		out << "Unsigned Form <" << form.getTarget()
			<< "> needs <" << form.getSignGrade()
			<< "> grades to be signed and <"
			<< form.getExecuteGrade()
			<< "> grades to be executed" << std::endl;
	return out;
}

std::string Form::getTarget() const{
	return _target;
}

void Form::setTarget(std::string target) {
	_target = target;
	return;
}

void Form::beSigned() {
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

void Form::formFunction() const{
	return;
}

void    Form::execute(Bureaucrat const &executor) const {
	if (getSign() == false)
		throw (Form::UnsignedForm());
	if (executor.getGrade() > getExecuteGrade())
		throw (Form::GradeTooLowException());
	formFunction();
}