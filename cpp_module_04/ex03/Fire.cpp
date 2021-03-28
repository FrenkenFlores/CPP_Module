/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 10:21:32 by fflores           #+#    #+#             */
/*   Updated: 2021/03/28 10:22:41 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fire.hpp"

Fire::Fire() : AMateria("fire") {
	return;
}

Fire::Fire(const Fire &src) {
	*this = src;
	return;
}

Fire & Fire::operator=(const Fire &rhs) {
	_type = rhs._type;
	_xp = rhs._xp;
	return (*this);
}

Fire::~Fire() {
	return;
}

AMateria * Fire::clone() const {
	AMateria *ptr = new Fire;
	return (ptr);
}

void Fire::use(ICharacter &target) {
	AMateria::use(target);
	std::cout << "* throws a Fire ball at " << target.getName() << " *" << std::endl;
	return;
}