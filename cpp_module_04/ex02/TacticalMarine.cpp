#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return;
}

TacticalMarine::TacticalMarine(const TacticalMarine &src) {
	*this = src;
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return ;
}

TacticalMarine & TacticalMarine::operator=(const TacticalMarine &rhs) {
	(void)rhs;
	return (*this);
}

ISpaceMarine * TacticalMarine::clone() const {
	TacticalMarine *tmp = new TacticalMarine;
	return (tmp);
}

void TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT!" << std::endl;
	return;
}

void TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl;
	return;
}

void TacticalMarine::meleeAttack() const {
	std::cout <<  "* attacks with a chainsword *" << std::endl;
	return;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh..." << std::endl;
	return;
}