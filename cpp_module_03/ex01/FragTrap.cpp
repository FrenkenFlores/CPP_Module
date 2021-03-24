/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:16:52 by fflores           #+#    #+#             */
/*   Updated: 2021/03/24 21:54:23 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

std::string FragTrap::_nameArray[] = {"Refjio", "Mario" , "Santino", "Janet", \
"Fredro" , "Jozella", "Leila", "Don-Corleone", "Flores" , "Ember"};

std::string FragTrap::_randomAttackArray[] = {"Low kick", "High kick" , "Uppercut", "Overhand", \
"Jab" , "Crosss", "Hook", "Counterpunch", "Bolo punch" , "Switch-Hitter"};

int	FragTrap::_randomAttackDamageArray[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int FragTrap::_maxEnergyPoints = 100;
int FragTrap::_maxHitPoints = 100;
int FragTrap::_index = 0;

int FragTrap::getIndex() const{
	return this->_index;
}

int FragTrap::getId() const{
	return this->_id;
}

std::string FragTrap::getName() const{
	return this->_name;
}

std::string FragTrap::generateRandomName()
{
	std::srand(time(0));
	static int i = 0;
	return (FragTrap::_nameArray[((std::rand() + getIndex() + i++) % NUMBER_OF_ROBOTS)]);
}

int FragTrap::generateRandomAttackDamage()
{
	std::srand(time(0));
	static int i = 0;
	return (FragTrap::_randomAttackDamageArray[((std::rand() + _index + i++) % NUMBER_OF_ROBOTS)]);
}

std::string FragTrap::generateRandomAttackName()
{
	static int i = 0;
	std::srand(time(0));
	return (FragTrap::_randomAttackArray[((std::rand() + _index + i++) % NUMBER_OF_ROBOTS)]);
}


FragTrap::FragTrap() {
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

FragTrap::FragTrap(std::string name) {
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

FragTrap::FragTrap(const FragTrap &src) {
	std::cout << "Copy constructor called" << std::endl;
	_id = _index;
	_index++;
	*this = src;
	return;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor called" << std::endl;
	_index--;
	return;
}

FragTrap &FragTrap::operator=(const FragTrap &src) {
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


std::ostream &operator<<(std::ostream &o, const FragTrap &fragTrap) {
	o << fragTrap.getName();
	return (o);
}

void FragTrap::rangedAttack(std::string const &target) {
	if (_energyPoints < 10)
	{
		std::cout << "FR4G-TP <" << _name << "> don't have enough energy" << std::endl;
		return;
	}
	std::cout << "FR4G-TP <" << _name << "> attacks <" << target << "> at range, causing <" << _rangedAttackDamage << "> points of damage!" << std::endl;
	_energyPoints -= 10;
	return;
}

int FragTrap::getRangedAttackDamage() {
	return _rangedAttackDamage;
}

void FragTrap::meleeAttack(std::string const &target) {
	if (_energyPoints < 20)
	{
		std::cout << "FR4G-TP <" << _name << "> don't have enough energy" << std::endl;
		return;
	}
	std::cout << "FR4G-TP <" << _name << "> attacks <" << target << "> in close combat, causing <" << _meleeAttackDamage << "> points of damage!" << std::endl;
	_energyPoints -= 20;
	return;
}

int FragTrap::getMeleeAttackDamage() {
	return _meleeAttackDamage;
}

void FragTrap::randomAttack(std::string const &target)
{
	if (_energyPoints < 25)
	{
		std::cout << "FR4G-TP <" << _name << "> don't have enough energy" << std::endl;
		return;
	}
	_randomAttackDamage = generateRandomAttackDamage();
	std::cout << "FR4G-TP <" << _name << "> attacks <" << target << "> with " << generateRandomAttackName() << ", causing <" << _randomAttackDamage << "> points of damage!" << std::endl;
	_energyPoints -= 25;
	return;
}

int FragTrap::getRandomAttackDamage() {
	return _randomAttackDamage;
}

void FragTrap::takeDamage(unsigned int amount) {
	_hitPoints -= (amount - _armorDamageReduction);
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "FR4G-TP <" << _name << "> toke <" << amount << "> of damage and is left with <" << _hitPoints << "> hit points" << std::endl;
	return;
}
void FragTrap::beRepaired(unsigned int amount) {
	_hitPoints += amount;
	_energyPoints += amount;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	if (_energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
	std::cout << "FR4G-TP <" << _name << "> is been repaired and it has <" << _hitPoints << "> hit points and " << _energyPoints << " energy points left" << std::endl;
	return;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target) {
	randomAttack(target);
	return;
}

int FragTrap::getVaulthunter_dot_exeDamage(void) {
	return getRandomAttackDamage();
}

