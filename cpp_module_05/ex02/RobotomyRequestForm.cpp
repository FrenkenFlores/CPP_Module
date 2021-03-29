#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form(target, 72, 45){
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
	srand(time(NULL));
	std::cout << "noise! ... noise! ... noise!" << std::endl;
	if (rand() % 10 > 5)
		std::cout << "<" << getTarget() << "> has been robotomized successfully 50% of the time" << std::endl;
	else
		std::cout << "failure" << std::endl;
	return;
}
