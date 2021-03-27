#ifndef ASSASSIN_HPP
#define ASSASSIN_HPP
#include "ISpaceMarine.hpp"
#include <iostream>

class Assassin : public ISpaceMarine
{
public:
	Assassin(void);
	Assassin(const Assassin &src);
	Assassin & operator=(const Assassin &rhs);
	~Assassin(void);
	ISpaceMarine * clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};


#endif