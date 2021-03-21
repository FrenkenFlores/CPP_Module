#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *_weapon;
	std::string _name;

public:
	HumanB(std::string name);
	~HumanB();
	void attack() const;
	std::string getName();
	void setName(std::string name);
	Weapon *getWeapon();
	void setWeapon(Weapon &weapon);
};

#endif