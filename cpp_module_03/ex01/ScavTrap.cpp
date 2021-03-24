/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:16:52 by fflores           #+#    #+#             */
/*   Updated: 2021/03/24 21:52:40 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


std::string ScavTrap::_nameArray[] = {"Refjio", "Mario" , "Santino", "Janet", \
"Fredro" , "Jozella", "Leila", "Don-Corleone", "Flores" , "Ember"};

std::string ScavTrap::_randomAttackArray[] = {"Low kick", "High kick" , "Uppercut", "Overhand", \
"Jab" , "Crosss", "Hook", "Counterpunch", "Bolo punch" , "Switch-Hitter"};

int	ScavTrap::_randomAttackDamageArray[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int ScavTrap::_maxEnergyPoints = 100;
int ScavTrap::_maxHitPoints = 100;
int ScavTrap::_index = 0;


ScavTrap::ScavTrap() {
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

ScavTrap::ScavTrap(std::string name) {
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

ScavTrap::ScavTrap(const ScavTrap &src) {
	std::cout << "Copy constructor called" << std::endl;
	_id = _index;
	_index++;
	*this = src;
	return;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor called" << std::endl;
	_index--;
	return;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
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

int ScavTrap::getIndex() const{
	return this->_index;
}

int ScavTrap::getId() const{
	return this->_id;
}

std::string ScavTrap::getName() const{
	return this->_name;
}

std::string ScavTrap::generateRandomName()
{
	std::srand(time(0));
	static int i = 0;
	return (ScavTrap::_nameArray[((std::rand() + getIndex() + i++) % NUMBER_OF_ROBOTS)]);
}

int ScavTrap::generateRandomAttackDamage()
{
	std::srand(time(0));
	static int i = 0;
	return (ScavTrap::_randomAttackDamageArray[((std::rand() + _index + i++) % NUMBER_OF_ROBOTS)]);
}

std::string ScavTrap::generateRandomAttackName()
{
	static int i = 0;
	std::srand(time(0));
	return (ScavTrap::_randomAttackArray[((std::rand() + _index + i++) % NUMBER_OF_ROBOTS)]);
}

std::ostream &operator<<(std::ostream &o, const ScavTrap &ScavTrap) {
	o << ScavTrap.getName();
	return (o);
}

void ScavTrap::rangedAttack(std::string const &target) {
	if (_energyPoints < 10)
	{
		std::cout << "ScavTrap <" << _name << "> don't have enough energy" << std::endl;
		return;
	}
	std::cout << "ScavTrap <" << _name << "> attacks <" << target << "> at range, causing <" << _rangedAttackDamage << "> points of damage!" << std::endl;
	_energyPoints -= 10;
	return;
}

int ScavTrap::getRangedAttackDamage() {
	return _rangedAttackDamage;
}

void ScavTrap::meleeAttack(std::string const &target) {
	if (_energyPoints < 20)
	{
		std::cout << "ScavTrap <" << _name << "> don't have enough energy" << std::endl;
		return;
	}
	std::cout << "ScavTrap <" << _name << "> attacks <" << target << "> in close combat, causing <" << _meleeAttackDamage << "> points of damage!" << std::endl;
	_energyPoints -= 20;
	return;
}

int ScavTrap::getMeleeAttackDamage() {
	return _meleeAttackDamage;
}

void ScavTrap::randomAttack(std::string const &target)
{
	if (_energyPoints < 25)
	{
		std::cout << "ScavTrap <" << _name << "> don't have enough energy" << std::endl;
		return;
	}
	_randomAttackDamage = generateRandomAttackDamage();
	std::cout << "ScavTrap <" << _name << "> attacks <" << target << "> with " << generateRandomAttackName() << ", causing <" << _randomAttackDamage << "> points of damage!" << std::endl;
	_energyPoints -= 25;
	return;
}

int ScavTrap::getRandomAttackDamage() {
	return _randomAttackDamage;
}

void ScavTrap::takeDamage(unsigned int amount) {
	_hitPoints -= (amount - _armorDamageReduction);
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "ScavTrap <" << _name << "> toke <" << amount << "> of damage and is left with <" << _hitPoints << "> hit points" << std::endl;
	return;
}
void ScavTrap::beRepaired(unsigned int amount) {
	_hitPoints += amount;
	_energyPoints += amount;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	if (_energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
	std::cout << "ScavTrap <" << _name << "> is been repaired and it has <" << _hitPoints << "> hit points and " << _energyPoints << " energy points left" << std::endl;
	return;
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
	int         random;
    std::string challenge[] =
    {
        "Kill",
        "Murder",
        "Torture",
        "Get married"
    };

    srand(time(NULL));
    random = rand() % 4;
    std::cout << this->_name << ": " << target << "!!! I challenge you to " << challenge[random] << std::endl;
    return ;
}
