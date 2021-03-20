#include "Weapon.hpp"

Weapon::Weapon() {
	return;
}

Weapon::~Weapon() {
	return;
}

std::string& Weapon::getType() const {
	return (this->_type);
}

void Weapon::setType(std::string str) {
	this->_type = str;
}