/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Slave.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 11:30:07 by fflores           #+#    #+#             */
/*   Updated: 2021/03/28 11:33:07 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Slave.hpp"

Slave::Slave() {
	_name = "Unnamed";
	std::cout << "My lord!" << std::endl;
	return;
}

Slave::Slave(const Slave &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Slave::Slave(std::string name) : Victim(name) {
	_name = name;
	std::cout << "My Lord!" << std::endl;
	return;
}

Slave & Slave::operator=(const Slave &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	_name = rhs._name;
	return (*this);
}

Slave::~Slave() {
	std::cout << "Thank you my Lord!" << std::endl;
	return;
}

void Slave::getPolymorphed() const {
	std::cout << _name << " has been turned into a fried chicken!" << std::endl;
	return;
}