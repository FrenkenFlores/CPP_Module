/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 17:23:44 by fflores           #+#    #+#             */
/*   Updated: 2021/03/25 17:35:59 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer() : _name("Unamed"), _title("Untitled"){
	std::cout << _name <<", "<< _title << ", is born!" << std::endl;
	return;
}

Sorcerer::Sorcerer(const Sorcerer &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title){
	std::cout << _name <<", "<< _title << ", is born!" << std::endl;
	return;
}

Sorcerer & Sorcerer::operator=(const Sorcerer &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	_name = rhs._name;
	_title = rhs._title;
	return (*this);
}

Sorcerer::~Sorcerer() {
	std::cout << _name <<", "<< _title << ", is dead. Consequences will never be the same!" << std::endl;
	return;
}

std::string Sorcerer::getName() const {
	return (_name);
}

std::string Sorcerer::getTitle() const {
	return (_title);
}

void Sorcerer::introduce() const{
	std::cout << "I am " << getName() << ", " << getTitle() << ", and I like ponies!" << std::endl;
	return ;
}

std::ostream &operator<<(std::ostream &out, const Sorcerer &src) {
	std::stringstream str;
	str << "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies!" << std::endl;
	out << str.str();
	return (out);
}

void Sorcerer::polymorph(Victim const &victim) const {
	victim.getPolymorphed();
	return;
}