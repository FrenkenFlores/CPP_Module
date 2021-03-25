/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 23:19:12 by fflores           #+#    #+#             */
/*   Updated: 2021/03/24 23:38:52 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {
	std::cout << "NinjaTrap random name constructor called" << std::endl;
	_maxEnergyPoints = 120;
	_maxHitPoints = 60;
	_id = _index;
	_index++;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_level = 1;
	_name = generateRandomName();
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_randomAttackDamage = generateRandomAttackDamage();
	_armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap(std::string name) {
	std::cout << "NinjaTrap default constructor called" << std::endl;
	_maxEnergyPoints = 120;
	_maxHitPoints = 60;
	_id = _index;
	_index++;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_level = 1;
	_name = name;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_randomAttackDamage = generateRandomAttackDamage();
	_armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap(const NinjaTrap &src) {
	std::cout << "NinjaTrap copy constructor called" << std::endl;
	_id = _index;
	_index++;
	*this = src;
	return;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "NinjaTrap destructor called" << std::endl;
	_index--;
	return;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &src) {
	std::cout << "NinjaTrap assignation operator called" << std::endl;
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

void NinjaTrap::rangedAttack(std::string const &target) {
	if (_energyPoints < 10)
	{
		std::cout << "NinjaTrap <" << _name << "> don't have enough energy" << std::endl;
		return;
	}
	std::cout << "NinjaTrap <" << _name << "> attacks <" << target << "> at range, causing <" << _rangedAttackDamage << "> points of damage!" << std::endl;
	_energyPoints -= 10;
	return;
}

void NinjaTrap::meleeAttack(std::string const &target) {
	if (_energyPoints < 20)
	{
		std::cout << "NinjaTrap <" << _name << "> don't have enough energy" << std::endl;
		return;
	}
	std::cout << "NinjaTrap <" << _name << "> attacks <" << target << "> in close combat, causing <" << _meleeAttackDamage << "> points of damage!" << std::endl;
	_energyPoints -= 20;
	return;
}

void NinjaTrap::randomAttack(std::string const &target)
{
	if (_energyPoints < 25)
	{
		std::cout << "NinjaTrap <" << _name << "> don't have enough energy" << std::endl;
		return;
	}
	_randomAttackDamage = generateRandomAttackDamage();
	std::cout << "NinjaTrap <" << _name << "> attacks <" << target << "> with " << generateRandomAttackName() << ", causing <" << _randomAttackDamage << "> points of damage!" << std::endl;
	_energyPoints -= 25;
	return;
}

void NinjaTrap::takeDamage(unsigned int amount) {
	_hitPoints -= (amount - _armorDamageReduction);
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "NinjaTrap <" << _name << "> toke <" << amount << "> of damage and is left with <" << _hitPoints << "> hit points" << std::endl;
	return;
}


void NinjaTrap::ninjaShoebox(const NinjaTrap &target) {
	std::cout << "NinjaTrap <" << _name << "> throw red smoke bomb on NinjaTrap <" << target.getName() << ">" <<  std::endl;
	return;
}

void NinjaTrap::ninjaShoebox(const ScavTrap &target) {
	std::cout << "NinjaTrap <" << _name << "> throw purple smoke bomb on ScavTrap <" << target.getName() << ">" <<  std::endl;
	return;
}

void NinjaTrap::ninjaShoebox(const FragTrap &target) {
	std::cout << "NinjaTrap <" << _name << "> throw green smoke bomb on FragTrap <" << target.getName() << ">" <<  std::endl;
	return;
}
