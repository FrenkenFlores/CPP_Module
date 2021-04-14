#include "ATarget.hpp"

ATarget::ATarget() {
	return;
}

ATarget::ATarget(const ATarget &src) {
	*this = src;
	return;
}

ATarget & ATarget::operator=(const ATarget &rhs) {
	this->type = rhs.type;
	return *this;
}

ATarget::ATarget(const std::string &type) {
	this->type = type;
	return;
}


ATarget::~ATarget() {
	return;
}

const std::string & ATarget::getType() const {
	return type;
}

void ATarget::getHitBySpell(const ASpell &spell) const {
	std::cout << this->type << " has been " << spell.getEffects() << "!\n";
	return;
}