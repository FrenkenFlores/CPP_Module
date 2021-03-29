#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form(target, 145, 137){
	return;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &form) : Form(form) {
	return;
}
RobotomyRequestForm::~RobotomyRequestForm() {
	return;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &form) {
	if (this != &form)
		Form::operator= (form);
	return (*this);
}

void    RobotomyRequestForm::formFunction() const {
}
