#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock
{
private:
	std::string name;
	std::string title;
	Warlock();
	Warlock(const Warlock &src);
	Warlock & operator=(const Warlock &rhs);
	std::vector<ASpell *> v;
	SpellBook book;
public:
	Warlock(const std::string &name, const std::string &title);
	std::string const & getName() const;
	std::string const & getTitle() const;
	void setTitle(const std::string & title);
	void introduce() const;
	virtual ~Warlock();
	void learnSpell(ASpell * spell);
	void forgetSpell(const std::string & name);
	void launchSpell(std::string name, ATarget & target);
};