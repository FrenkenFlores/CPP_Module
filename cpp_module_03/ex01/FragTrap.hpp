/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:16:54 by fflores           #+#    #+#             */
/*   Updated: 2021/03/24 21:28:57 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP
#define NUMBER_OF_ROBOTS 10

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class FragTrap
{
protected:
	int _id;
	int _hitPoints;
	int _energyPoints;
	int _level;
	std::string _name;
	int _meleeAttackDamage;
	int _rangedAttackDamage;
	int _randomAttackDamage;
	int _armorDamageReduction;

	static int _randomAttackDamageArray[NUMBER_OF_ROBOTS];
	static std::string _nameArray[NUMBER_OF_ROBOTS];
	static std::string _randomAttackArray[NUMBER_OF_ROBOTS];
	static int _maxEnergyPoints;
	static int _maxHitPoints;
	static int _index;

public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &src);
	~FragTrap(void);
	FragTrap &operator=(const FragTrap &src);
	void rangedAttack(std::string const & target);
	void randomAttack(std::string const &target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
	int getVaulthunter_dot_exeDamage(void);
	std::string generateRandomName(void);
	std::string generateRandomAttackName(void);
	int generateRandomAttackDamage(void);
	int getIndex(void) const;
	int getId(void) const;
	int getRandomAttackDamage(void);
	int getMeleeAttackDamage(void);
	int getRangedAttackDamage(void);
	std::string getName(void) const;
};

std::ostream &operator<<(std::ostream &o, const FragTrap &fragTrap);

#endif