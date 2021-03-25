/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:16:52 by fflores           #+#    #+#             */
/*   Updated: 2021/03/24 22:27:20 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap random name constructor called" << std::endl;
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
	std::cout << "ScavTrap default constructor called" << std::endl;
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
	std::cout << "ScavTrap copy constructor called" << std::endl;
	_id = _index;
	_index++;
	*this = src;
	return;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
	_index--;
	return;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
	std::cout << "ScavTrap assignation operator called" << std::endl;
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
