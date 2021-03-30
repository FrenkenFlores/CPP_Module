/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 06:06:16 by fflores           #+#    #+#             */
/*   Updated: 2021/03/30 06:06:17 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
class Form;
#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string _name;
	bool 		_signed;
	const int 		_gradeRequiredToSign;
	const int 		_gradeRequiredToExecute;
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
	Form(std::string name, int signGrade, int executeGrade);
	Form & operator=(const Form &rhs);
	Form(const Form &src);
	~Form();
	std::string getName() const;
	bool getSign() const;
	int getExecuteGrade() const;
	int getSignGrade() const;
	void beSigned(const Bureaucrat &target);
	void beUnsigned();
};

std::ostream & operator<<(std::ostream &out, const Form & form);

#endif