/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:46:27 by fflores           #+#    #+#             */
/*   Updated: 2021/03/23 20:46:28 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->_name = name;
	return;
}

HumanB::~HumanB() {
	return;
}

std::string HumanB::getName() {
	return (this->_name);
}

void HumanB::setName(std::string name){
	this->_name = name;
	return;
}

Weapon *HumanB::getWeapon() {
	return (this->_weapon);
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return;
}


void HumanB::attack() const{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	return;
}