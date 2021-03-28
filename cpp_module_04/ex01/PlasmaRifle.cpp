/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 20:11:37 by fflores           #+#    #+#             */
/*   Updated: 2021/03/25 20:11:38 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle",5, 21) {
	return;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &src) {
	*this = src;
}

PlasmaRifle & PlasmaRifle::operator=(const PlasmaRifle &rhs) {
	_name = rhs._name;
	_damagePoints = rhs._damagePoints;
	_actionPoints = rhs._actionPoints;
	return (*this);
}

PlasmaRifle::~PlasmaRifle() {
	return;
}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return;
}