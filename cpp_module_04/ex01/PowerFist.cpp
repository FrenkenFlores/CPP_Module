/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 20:25:43 by fflores           #+#    #+#             */
/*   Updated: 2021/03/25 20:27:17 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist",8, 50) {
	return;
}

PowerFist::PowerFist(const PowerFist &src) {
	*this = src;
}

PowerFist & PowerFist::operator=(const PowerFist &rhs) {
	_name = rhs._name;
	_damagePoints = rhs._damagePoints;
	_actionPoints = rhs._actionPoints;
	return (*this);
}

PowerFist::~PowerFist() {
	return;
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return;
}