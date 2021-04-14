#include "ASpell.hpp"

ASpell::ASpell() {
	return;
}

ASpell::ASpell(const ASpell &src) {
	*this = src;
	return;
}

ASpell & ASpell::operator=(const ASpell &rhs) {
	this->name = rhs.name;
	this->effects = rhs.effects;
	return *this;
}

ASpell::ASpell(const std::string &name, const std::string &effects) {
	this->name = name;
	this->effects = effects;
	return;
}


ASpell::~ASpell() {
	return;
}

void ASpell::launch(const ATarget &target) {
	target.getHitBySpell(*this);
	return;
}

const std::string & ASpell::getName() const {
	return name;
}

const std::string & ASpell::getEffects() const {
	return effects;
}