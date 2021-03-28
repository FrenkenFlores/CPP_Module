/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:16:11 by fflores           #+#    #+#             */
/*   Updated: 2021/03/27 21:16:11 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
	return;
}

Cure::Cure(const Cure &src) {
	*this = src;
	return;
}

Cure & Cure::operator=(const Cure &rhs) {
	_type = rhs._type;
	_xp = rhs._xp;
	return (*this);
}

Cure::~Cure() {
	return;
}

AMateria * Cure::clone() const {
	AMateria *ptr = new Cure;
	return (ptr);
}

void Cure::use(ICharacter &target) {
	AMateria::use(target);
	std::cout << "* heals " << target.getName() <<"’s wounds *" << std::endl;
	return;
}