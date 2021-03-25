/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:19:25 by fflores           #+#    #+#             */
/*   Updated: 2021/03/25 11:19:44 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() {
	std::cout << "SuperTrap random name constructor called" << std::endl;

	_id = _index;
	_index++;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_level = 1;
	_name = generateRandomName();
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 20;
	_randomAttackDamage = generateRandomAttackDamage();
	_armorDamageReduction = 5;
}

SuperTrap::SuperTrap(std::string name) {
	std::cout << "SuperTrap default constructor called" << std::endl;
	_maxHitPoints = 100;
	_maxEnergyPoints = 120;
	_id = _index;
	_index++;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_level = 1;
	_name = name;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 20;
	_randomAttackDamage = generateRandomAttackDamage();
	_armorDamageReduction = 5;
}

SuperTrap::SuperTrap(const SuperTrap &src) {
	std::cout << "SuperTrap copy constructor called" << std::endl;
	_id = _index;
	_index++;
	*this = src;
	return;
}

SuperTrap::~SuperTrap() {
	std::cout << "SuperTrap destructor called" << std::endl;
	_index--;
	return;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &src) {
	std::cout << "SuperTrap assignation operator called" << std::endl;
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

void SuperTrap::rangedAttack(std::string const &target) {
	if (_energyPoints < 10)
	{
		std::cout << "SuperTrap <" << _name << "> don't have enough energy" << std::endl;
		return;
	}
	std::cout << "SuperTrap <" << _name << "> attacks <" << target << "> at range, causing <" << _rangedAttackDamage << "> points of damage!" << std::endl;
	_energyPoints -= 10;
	return;
}

void SuperTrap::meleeAttack(std::string const &target) {
	if (_energyPoints < 20)
	{
		std::cout << "SuperTrap <" << _name << "> don't have enough energy" << std::endl;
		return;
	}
	std::cout << "SuperTrap <" << _name << "> attacks <" << target << "> in close combat, causing <" << _meleeAttackDamage << "> points of damage!" << std::endl;
	_energyPoints -= 20;
	return;
}

void SuperTrap::randomAttack(std::string const &target)
{
	if (_energyPoints < 25)
	{
		std::cout << "SuperTrap <" << _name << "> don't have enough energy" << std::endl;
		return;
	}
	_randomAttackDamage = generateRandomAttackDamage();
	std::cout << "SuperTrap <" << _name << "> attacks <" << target << "> with " << generateRandomAttackName() << ", causing <" << _randomAttackDamage << "> points of damage!" << std::endl;
	_energyPoints -= 25;
	return;
}

void SuperTrap::takeDamage(unsigned int amount) {
	_hitPoints -= (amount - _armorDamageReduction);
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "SuperTrap <" << _name << "> toke <" << amount << "> of damage and is left with <" << _hitPoints << "> hit points" << std::endl;
	return;
}
