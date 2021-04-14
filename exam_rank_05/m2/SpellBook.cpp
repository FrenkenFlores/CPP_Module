#include "SpellBook.hpp"

SpellBook::SpellBook() {
	return;
}

SpellBook::~SpellBook() {
	return;
}

void SpellBook::learnSpell(ASpell *spell) {
	for (size_t i = 0; i < v.size(); ++i) {
		if (v.at(i)->getName() == spell->getName())
			return;
	}
	v.push_back(spell->clone());
}

ASpell * SpellBook::createSpell(const std::string &spell) {
	for (size_t i = 0; i < v.size(); ++i) {
		if (v.at(i)->getName() == spell)
			return (v.at(i)->clone());
	}
	return NULL;
}

void SpellBook::forgetSpell(const std::string &spell) {
	std::vector<ASpell *>::iterator it_begin;
	std::vector<ASpell *>::iterator it_end = v.end();
	for (it_begin = v.begin() ; it_begin != it_end; ++it_begin) {
		if ((*it_begin)->getName() == spell)
		{
			v.erase(it_begin);
			return;
		}
	}
}

std::vector<ASpell *> & SpellBook::getV() {
	return v;
}