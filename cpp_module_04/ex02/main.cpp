#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Assassin.hpp"
#include <iostream>


int main()
{
	ISpaceMarine* robot = new AssaultTerminator;
	ISpaceMarine* jim = new TacticalMarine;
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* ezio = new Assassin;
	Assassin altair;
	ISquad* vlc = new Squad;
	vlc->push(&altair);
	vlc->push(ezio);
	vlc->push(robot);
	vlc->push(bob);
	vlc->push(jim);
	std::cout << vlc->getCount() << " Units been deployed" << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}
