/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 06:06:45 by fflores           #+#    #+#             */
/*   Updated: 2021/03/30 06:06:45 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("", 145, 137){
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form(target, 145, 137){
	return;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &form) : Form(form) {
	return;
}
ShrubberyCreationForm::~ShrubberyCreationForm() {
	return;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &form) {
	if (this != &form)
		Form::operator= (form);
	return (*this);
}

void    ShrubberyCreationForm::formFunction() const {
	std::string name_of_file = getTarget() + std::string("_form");

	std::ofstream new_file(name_of_file);
	if (new_file.is_open()) {
		new_file << "#####################################" << std::endl;
		new_file << "                +                    " << std::endl;
		new_file << "                #                    " << std::endl;
		new_file << "               ###                   " << std::endl;
		new_file << "       @#:. .:##@##:. .:#@           " << std::endl;
		new_file << "         @####@###@####@             " << std::endl;
		new_file << "   @#:.    .:#@###@#:.    .:#@       " << std::endl;
		new_file << "      @#########@#########@          " << std::endl;
		new_file << "   @#:.  @####@###@####@  .:#@       " << std::endl;
		new_file << "         @####FFLORES@##@@#######@   " << std::endl;
		new_file << "  @##@#####@#####@##@  #####         " << std::endl;
		new_file << "@#:. ...  .:##@###@###@##:.  ... .:#@" << std::endl;
		new_file << "    @#######@##@#####@##@#######@    " << std::endl;
		new_file << "    @#######@##@#####@##@#######@    " << std::endl;
		new_file << "      @#####@@#######@@#####@        " << std::endl;
		new_file << "                ##                   " << std::endl;
		new_file << "                ##                   " << std::endl;
		new_file << "               ####                  " << std::endl;
		new_file << "#####################################" << std::endl;
	}
}
