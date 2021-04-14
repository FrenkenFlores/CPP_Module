#pragma once
#include <string>
#include <iostream>

class ASpell;

class ATarget
{
private:
	std::string type;
public:
	ATarget();
	ATarget(const std::string &type);
	ATarget(const ATarget & src);
	ATarget & operator = (const ATarget &rhs);
	virtual ~ATarget();
	const std::string & getType() const;
	virtual const ATarget *clone() const = 0;
	void getHitBySpell(const ASpell & spell) const;
};

#include "ASpell.hpp"