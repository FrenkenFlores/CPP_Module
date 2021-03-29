#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat
{
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &src);
	Bureaucrat & operator=(const Bureaucrat &rhs);
	~Bureaucrat();
	int	getGrade() const;
	std::string getName() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(Form &form);
	struct GradeTooHighException : public std::exception
	{
		const char * what() const throw() {
			return ("GradeTooHighException");
		}
	};
	struct GradeTooLowException : public std::exception
	{
		const char * what() const throw() {
			return ("GradeTooLowException");
		}
	};
private:
	Bureaucrat();
	const std::string _name;
	int	_grade;
};

std::ostream & operator<<(std::ostream &out, const Bureaucrat &src);


#endif