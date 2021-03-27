#include "Assassin.hpp"

Assassin::Assassin()
{
	std::cout <<  "Assassin been summoned" << std::endl;
	return;
}

Assassin::Assassin(const Assassin &src) {
	*this = src;
	std::cout << "Assassin been summoned" << std::endl;
	return ;
}

Assassin & Assassin::operator=(const Assassin &rhs) {
	(void)rhs;
	return (*this);
}

ISpaceMarine * Assassin::clone() const {
	Assassin *tmp = new Assassin;
	return (tmp);
}

void Assassin::battleCry() const {
	std::cout << "My lord!" << std::endl;
	return;
}

void Assassin::rangedAttack() const {
	std::cout <<  "Fire an arrow" << std::endl;
	return;
}

void Assassin::meleeAttack() const {
	std::cout <<  "Stab with the knife" << std::endl;
	return;
}

Assassin::~Assassin() {
	std::cout << "Disappear" << std::endl;
	return;
}