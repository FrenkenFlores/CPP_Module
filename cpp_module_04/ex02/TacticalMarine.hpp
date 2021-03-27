#ifndef TACTICAL_MARINE_HPP
#define TACTICAL_MARINE_HPP
#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine(void);
	TacticalMarine(const TacticalMarine &src);
	TacticalMarine & operator=(const TacticalMarine &rhs);
	~TacticalMarine(void);
	ISpaceMarine * clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};


#endif