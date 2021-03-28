/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:15:48 by fflores           #+#    #+#             */
/*   Updated: 2021/03/27 21:15:48 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	delete robot;
	delete jim;
	delete bob;
	delete ezio;
	delete vlc;
	return 0;
}
