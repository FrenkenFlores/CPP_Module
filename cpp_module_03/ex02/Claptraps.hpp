/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptraps.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 21:58:11 by fflores           #+#    #+#             */
/*   Updated: 2021/03/24 22:18:10 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAPS_HPP
#define CLAP_TRAPS_HPP

#define NUMBER_OF_ROBOTS 10

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Claptraps
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
	Claptraps(void);
	Claptraps(std::string name);
	Claptraps(const Claptraps &src);
	~Claptraps(void);
	Claptraps &operator=(const Claptraps &src);
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

std::ostream &operator<<(std::ostream &o, const Claptraps &scavTrap);




#endif