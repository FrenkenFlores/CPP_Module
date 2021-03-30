/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 06:06:31 by fflores           #+#    #+#             */
/*   Updated: 2021/03/30 06:06:32 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
class Form;
#include <string>
#include <iostream>
#include <fstream>
#include <exception>
#include "Bureaucrat.hpp"
class Form
{
private:
	std::string _target;
	bool 		_signed;
	int 		_gradeRequiredToSign;
	int 		_gradeRequiredToExecute;
	Form();
public:
	struct GradeTooHighException : std::exception
	{
		const char * what() const throw() {
			return ("GradeTooHighException");
		}
	};
	struct GradeTooLowException : std::exception
	{
		const char * what() const throw() {
			return ("GradeTooLowException");
		}
	};
	struct UnsignedForm : std::exception
	{
		const char * what() const throw() {
			return ("Unsigned form");
		}
	};
	Form(std::string target, int signGrade, int executeGrade);
	Form & operator=(const Form &rhs);
	Form(const Form &src);
	virtual ~Form();
	std::string getTarget() const;
	void setTarget(std::string target);
	bool getSign() const;
	int getExecuteGrade() const;
	int getSignGrade() const;
	void beSigned(const Bureaucrat &target);
	void beUnsigned();
	void execute(Bureaucrat const & executor) const;
	virtual void formFunction() const = 0;
};

std::ostream & operator<<(std::ostream &out, const Form & form);

#endif