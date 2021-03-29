#ifndef FORM_HPP
#define FORM_HPP
#include <string>
#include <iostream>
#include <exception>

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
	void beSigned();
	void beUnsigned();
};

std::ostream & operator<<(std::ostream &out, const Form & form);

#endif