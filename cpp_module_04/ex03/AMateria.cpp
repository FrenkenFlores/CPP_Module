/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:16:03 by fflores           #+#    #+#             */
/*   Updated: 2021/03/27 21:16:04 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _xp(0), _type("") {
	return;
}

AMateria::~AMateria() {
	return;
}

AMateria::AMateria(const std::string &type) : _xp(0), _type(type) {
	return;
}

AMateria::AMateria(const AMateria &src) {
	*this = src;
	return;
}

AMateria & AMateria::operator=(const AMateria &rhs) {
	_xp = rhs._xp;
	_type = rhs._type;
	return (*this);
}

void AMateria::use(ICharacter &target) {
	(void)target;
	_xp += 10;
	return;
}

const std::string & AMateria::getType() const {
	return _type;
}