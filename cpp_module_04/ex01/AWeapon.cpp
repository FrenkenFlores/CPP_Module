/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:16:36 by fflores           #+#    #+#             */
/*   Updated: 2021/03/25 19:16:37 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() {
	return;
}

AWeapon::AWeapon(const AWeapon &src) {
	*this = src;
	return;
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage) {
	this->_name = name;
	this->_actionPoints = apcost;
	this->_damagePoints = damage;
	return;
}

AWeapon::~AWeapon() {
	return;
}

AWeapon & AWeapon::operator=(const AWeapon &rhs) {
	this->_damagePoints = rhs._damagePoints;
	this->_actionPoints = rhs._actionPoints;
	this->_name = rhs._name;
	return (*this);
}

std::string AWeapon::getName() const {
	return (_name);
}

int AWeapon::getAPCost() const {
	return (_actionPoints);
}

int	AWeapon::getDamage() const {
	return (_damagePoints);
}