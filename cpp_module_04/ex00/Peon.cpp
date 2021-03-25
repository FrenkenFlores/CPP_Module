/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 17:23:47 by fflores           #+#    #+#             */
/*   Updated: 2021/03/25 18:17:48 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() {
	_name = "Unnamed";
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::Peon(const Peon &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Peon::Peon(std::string name) : Victim(name) {
	_name = name;
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon & Peon::operator=(const Peon &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	_name = rhs._name;
	return (*this);
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
	return;
}

void Peon::getPolymorphed() const {
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
	return;
}