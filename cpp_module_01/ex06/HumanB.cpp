#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->_name = name;
	return;
}

HumanB::~HumanB() {
	return;
}

std::string HumanB::getName() {
	return (this->_name);
}

void HumanB::setName(std::string name){
	this->_name = name;
	return;
}

Weapon *HumanB::getWeapon() {
	return (this->_weapon);
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return;
}


void HumanB::attack() const{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	return;
}