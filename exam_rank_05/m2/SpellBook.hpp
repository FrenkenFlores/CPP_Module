#pragma once

#include "ASpell.hpp"
#include <string>
#include <iostream>
#include <vector>

class SpellBook
{
public:
	SpellBook();
	~SpellBook();
	void learnSpell(ASpell* spell);
	void forgetSpell(std::string const &spell);
	ASpell* createSpell(std::string const &spell);
	std::vector<ASpell *> & getV();

private:
	std::vector<ASpell *> v;
	SpellBook(const SpellBook &src);
	SpellBook & operator=(const SpellBook & rhs);
};