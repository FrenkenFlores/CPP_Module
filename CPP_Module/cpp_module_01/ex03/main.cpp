/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:57:02 by fflores           #+#    #+#             */
/*   Updated: 2021/03/16 17:11:17 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <unistd.h>

#define Z_NBR 10

void fight(ZombieHorde &horde)
{
	Zombie *zombies = horde.getZombies();
	int zNbr = Z_NBR;
	int i = 0, j = 1;
	while (zNbr > 1)
	{
		while (zombies[i].getHealth() > 0 && zombies[i + j].getHealth() > 0)
		{
			std::cout << zombies[i].getName() << " : " << zombies[i].getHealth() << " vs " << zombies[i + j].getName() << " : " << zombies[i + j].getHealth() << std::endl;
			zombies[i].setHealth( zombies[i].getHealth() - zombies[i + j].getPower() );
			zombies[i + j].setHealth( zombies[i + j].getHealth() - zombies[i].getPower() );
		}
		if (zombies[i].getHealth() > zombies[i + j].getHealth() || zombies[i + j].getHealth() <= 0)
		{
			std::cout << zombies[i].getName() << " won " << zombies[i + j].getName() << std::endl;
			j++;
			zNbr--;
		}
		else if (zombies[i].getHealth() < zombies[i + j].getHealth() || zombies[i].getHealth() <= 0)
		{
			std::cout << zombies[i + j].getName() << " won " << zombies[i].getName() << std::endl;
			i = i + j;
			j = 1;
			zNbr--;
		}
		usleep(500000);
	}
	std::cout << std::endl << zombies[i].getName() << " Won the battle!\n" << std::endl;
}

int main(void)
{
	ZombieHorde horde(Z_NBR);
	horde.announce();
	fight(horde);
	return (0);
}