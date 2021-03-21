#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon) {
	this->_name = name;
	this->_weapon = weapon;
	return;
}


HumanA::~HumanA() {
	return;
}

std::string HumanA::getName() {
	return (this->_name);
}

void HumanA::setName(std::string name){
	this->_name = name;
	return;
}

Weapon HumanA::getWeapon() {
	return (this->_weapon);
}

void HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
	return;
}


void HumanA::attack() const{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
	return;
}