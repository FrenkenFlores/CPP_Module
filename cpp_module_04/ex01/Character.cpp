/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 20:29:15 by fflores           #+#    #+#             */
/*   Updated: 2021/03/28 12:20:20 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name(""), _actionPoints(40), _weapon(NULL){
	return;
}

Character::~Character() {
	return;
}

Character::Character(const std::string &name) : _name(name), _actionPoints(40), _weapon(NULL){
	return;
}

void Character::equip(AWeapon *weapon) {
	_weapon = weapon;
	return;
}

void Character::unequip() {
	_weapon = NULL;
	return;
}

void Character::recoverAP() {
	_actionPoints += 10;
	if (_actionPoints > 40)
		_actionPoints = 40;
	std::cout << _name << " has been recovored and it have " << _actionPoints << " left" << std::endl;
	return;
}

void Character::attack(Enemy *enemy) {
	if (_actionPoints >= _weapon->getAPCost())
	{
		if (_weapon == NULL)
			return;
		std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		_actionPoints -= _weapon->getAPCost();
		if (_actionPoints < 0)
			_actionPoints = 0;
		enemy->takeDamage(_weapon->getDamage());
	}
	else
		std::cout << _name << " don't have enough action points to use " << _weapon->getName() << std::endl;
	return;
}

std::string Character::getName() const{
	return (this->_name);
}

int Character::getActionPoints() const{
	return (this->_actionPoints);
}

AWeapon * Character::getWeapon() const{
	return (this->_weapon);
}

std::ostream &operator<<(std::ostream &out, const Character &src)
{
	if (src.getWeapon() != NULL)
		out << src.getName() << " has " << src.getActionPoints() << " AP and wields a " << src.getWeapon()->getName() << std::endl;
	else
		out << src.getName() << " has " << src.getActionPoints() << " AP and is unarmed" << std::endl;
	return (out);
}