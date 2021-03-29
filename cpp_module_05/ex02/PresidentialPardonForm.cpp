#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form(target, 25, 5){
	return;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &form) : Form(form) {
	return;
}
PresidentialPardonForm::~PresidentialPardonForm() {
	return;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &form) {
	if (this != &form)
		Form::operator= (form);
	return (*this);
}

void    PresidentialPardonForm::formFunction() const {
	std::cout << "<" << getTarget() << "> has been pardoned by Zafod Beeblebrox." << std::endl;
	return;
}
