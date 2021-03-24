/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptraps.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 21:58:14 by fflores           #+#    #+#             */
/*   Updated: 2021/03/24 22:16:54 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptraps.hpp"

std::string Claptraps::_nameArray[] = {"Refjio", "Mario" , "Santino", "Janet", \
"Fredro" , "Jozella", "Leila", "Don-Corleone", "Flores" , "Ember"};

std::string Claptraps::_randomAttackArray[] = {"Low kick", "High kick" , "Uppercut", "Overhand", \
"Jab" , "Crosss", "Hook", "Counterpunch", "Bolo punch" , "Switch-Hitter"};

int	Claptraps::_randomAttackDamageArray[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int Claptraps::_maxEnergyPoints = 100;
int Claptraps::_maxHitPoints = 100;
int Claptraps::_index = 0;

int Claptraps::getIndex() const{
	return this->_index;
}

int Claptraps::getId() const{
	return this->_id;
}

std::string Claptraps::getName() const{
	return this->_name;
}

std::string Claptraps::generateRandomName()
{
	std::srand(time(0));
	static int i = 0;
	return (Claptraps::_nameArray[((std::rand() + getIndex() + i++) % NUMBER_OF_ROBOTS)]);
}

int Claptraps::generateRandomAttackDamage()
{
	std::srand(time(0));
	static int i = 0;
	return (Claptraps::_randomAttackDamageArray[((std::rand() + _index + i++) % NUMBER_OF_ROBOTS)]);
}

std::string Claptraps::generateRandomAttackName()
{
	static int i = 0;
	std::srand(time(0));
	return (Claptraps::_randomAttackArray[((std::rand() + _index + i++) % NUMBER_OF_ROBOTS)]);
}


Claptraps::Claptraps() {
	std::cout << "Random name constructor called" << std::endl;
	_id = _index;
	_index++;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_level = 1;
	_name = generateRandomName();
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_randomAttackDamage = generateRandomAttackDamage();
	_armorDamageReduction = 5;
}

Claptraps::Claptraps(std::string name) {
	std::cout << "Default constructor called" << std::endl;
	_id = _index;
	_index++;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_level = 1;
	_name = name;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_randomAttackDamage = generateRandomAttackDamage();
	_armorDamageReduction = 5;
}

Claptraps::Claptraps(const Claptraps &src) {
	std::cout << "Copy constructor called" << std::endl;
	_id = _index;
	_index++;
	*this = src;
	return;
}

Claptraps::~Claptraps() {
	std::cout << "Destructor called" << std::endl;
	_index--;
	return;
}

Claptraps &Claptraps::operator=(const Claptraps &src) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &src)
	{
		_hitPoints = src._hitPoints;
		_energyPoints = src._energyPoints;
		_level = src._level;
		_name = src._name;
		_meleeAttackDamage = src._meleeAttackDamage;
		_rangedAttackDamage = src._rangedAttackDamage;
		_armorDamageReduction = src._armorDamageReduction;
	}
	return *this;
}


std::ostream &operator<<(std::ostream &o, const Claptraps &Claptraps) {
	o << Claptraps.getName();
	return (o);
}

int Claptraps::getRangedAttackDamage() {
	return _rangedAttackDamage;
}

int Claptraps::getMeleeAttackDamage() {
	return _meleeAttackDamage;
}

int Claptraps::getRandomAttackDamage() {
	return _randomAttackDamage;
}
