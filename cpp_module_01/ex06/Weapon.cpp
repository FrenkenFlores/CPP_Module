/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:46:49 by fflores           #+#    #+#             */
/*   Updated: 2021/03/23 20:46:49 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	return;
}

Weapon::Weapon(std::string type){
	this->_type = type;
	return;
}

Weapon::~Weapon() {
	return;
}

std::string const &Weapon::getType() const{
	return (this->_type);
}

void Weapon::setType(std::string type) {
	this->_type = type;
	return;
}