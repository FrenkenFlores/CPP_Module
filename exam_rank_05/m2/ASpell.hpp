#pragma once

#include <iostream>
#include <string>

class ATarget;
class ASpell
{
protected:
	std::string name;
	std::string effects;

public:
	ASpell();
	ASpell(const std::string &name, const std::string &effects);
	ASpell(const ASpell & src);
	ASpell & operator=(const ASpell & rhs);
	virtual ~ASpell();
	std::string const & getName() const;
	std::string const & getEffects() const;
	void launch(const ATarget &target);
	virtual ASpell *clone() const = 0;
};


#include "ATarget.hpp"