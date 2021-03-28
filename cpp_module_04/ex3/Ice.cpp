/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:16:15 by fflores           #+#    #+#             */
/*   Updated: 2021/03/27 21:16:15 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	return;
}

Ice::Ice(const Ice &src) {
	*this = src;
	return;
}

Ice & Ice::operator=(const Ice &rhs) {
	_type = rhs._type;
	_xp = rhs._xp;
	return (*this);
}

Ice::~Ice() {
	return;
}

AMateria * Ice::clone() const {
	AMateria *ptr = new Ice;
	return (ptr);
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at NAME *" << std::endl;
	return;
}