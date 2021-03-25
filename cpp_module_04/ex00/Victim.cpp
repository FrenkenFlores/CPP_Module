/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 17:23:40 by fflores           #+#    #+#             */
/*   Updated: 2021/03/25 17:31:34 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim() : _name("Unamed") {
	std::cout << "Some random victim called " <<  _name <<" just appeared!" << std::endl;
	return;
}

Victim::Victim(const Victim &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Victim::Victim(std::string name) : _name(name) {
	std::cout << "Some random victim called " <<  _name <<" just appeared!" << std::endl;
	return;
}

Victim & Victim::operator=(const Victim &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	_name = rhs._name;
	return (*this);
}

Victim::~Victim() {
	std::cout << "Victim " <<  _name <<" just died for no apparent reason!" << std::endl;	
	return;
}

std::string Victim::getName() const {
	return (_name);
}

void Victim::introduce() const{
	std::cout << "I am " << getName() << ", and I like otters!" << std::endl;
	return ;
}

std::ostream &operator<<(std::ostream &out, const Victim &src) {
	std::stringstream str;
	str << "I am " << src.getName() << ", and I like otters!" << std::endl;
	out << str.str();
	return (out);
}

void Victim::getPolymorphed(void) const {
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
	return;
}