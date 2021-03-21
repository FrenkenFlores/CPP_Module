#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon &_weapon;
	std::string _name;

public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack() const;
	std::string getName();
	void setName(std::string name);
	Weapon getWeapon();
	void setWeapon(Weapon weapon);
};

#endif