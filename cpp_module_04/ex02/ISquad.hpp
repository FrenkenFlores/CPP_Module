#ifndef ISQUAD
#define ISQUAD

#include "ISpaceMarine.hpp"

class ISquad
{
protected:
	int _count;
public:
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;
};

#endif