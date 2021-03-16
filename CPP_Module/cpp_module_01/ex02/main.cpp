/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:57:02 by fflores           #+#    #+#             */
/*   Updated: 2021/03/16 08:15:04 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

#define TEAM_NBR 5

Zombie	**createRedZombie()
{
	int i = 0;
	Zombie **zombies = new Zombie*[TEAM_NBR];
	ZombieEvent redZombieEvent;
	redZombieEvent.setZombieType("Red");
	zombies[i++] = redZombieEvent.newZombie("RedTom");
	while (i < TEAM_NBR)
		zombies[i++] = redZombieEvent.randomChump();
	return (zombies);
}

Zombie	**createBlueZombie()
{
	int i = 0;
	Zombie **zombies = new Zombie*[TEAM_NBR];
	ZombieEvent blueZombieEvent;
	blueZombieEvent.setZombieType("Blue");
	zombies[i++] = blueZombieEvent.newZombie("BlueTom");
	while (i < TEAM_NBR)
		zombies[i++] = blueZombieEvent.randomChump();
	return (zombies);
}

void cleanMemory(Zombie **redZombieTeam, Zombie **blueZombieTeam)
{
	int i = 0;
	while (i != TEAM_NBR)
	{
		if (redZombieTeam[i] != NULL)
			delete redZombieTeam[i];
		i++;
	}
	i = 0;
	while (i != TEAM_NBR)
	{
		if (blueZombieTeam[i] != NULL)
			delete blueZombieTeam[i];
		i++;
	}
}

void mortalCombat(Zombie **redZombieTeam, Zombie **blueZombieTeam)
{
	int redZombieDied = 0;
	int blueZombieDied = 0;
	int index = 0;
	while ((blueZombieDied != TEAM_NBR || redZombieDied != TEAM_NBR) && index != ZOMBIE_NUMBER)
	{
		if (redZombieTeam[index % TEAM_NBR] && blueZombieTeam[index % TEAM_NBR])
			std::cout << redZombieTeam[index % TEAM_NBR]->getName() << " <" << redZombieTeam[index % TEAM_NBR]->getType() <<"> is fighting " << blueZombieTeam[index % TEAM_NBR]->getName() << " <" << blueZombieTeam[index % TEAM_NBR]->getType() << ">" << std::endl;
		if (redZombieTeam[index % TEAM_NBR] && blueZombieTeam[index % TEAM_NBR])
		{
			redZombieTeam[index % TEAM_NBR]->setHealth(redZombieTeam[index % TEAM_NBR]->getHealth() - blueZombieTeam[index % TEAM_NBR]->getPower());
			if (redZombieTeam[index % TEAM_NBR]->getHealth() < 0)
			{
				delete redZombieTeam[index % TEAM_NBR];
				redZombieTeam[index % TEAM_NBR] = NULL;
				redZombieDied++;
			}
		}
		if (redZombieTeam[index % TEAM_NBR] && blueZombieTeam[index % TEAM_NBR])
		{
			blueZombieTeam[index % TEAM_NBR]->setHealth(blueZombieTeam[index % TEAM_NBR]->getHealth() - redZombieTeam[index % TEAM_NBR]->getPower());
			if (blueZombieTeam[index % TEAM_NBR]->getHealth() < 0)
			{
				delete blueZombieTeam[index % TEAM_NBR];
				blueZombieTeam[index % TEAM_NBR] = NULL;
				blueZombieDied++;
			}
		}
		index++;
	}
	if (blueZombieDied > redZombieDied)
		std::cout << "Red zombie team won the battle!" << std::endl;
	else
		std::cout << "Blue zombie team won the battle!" << std::endl;
}

int main(void)
{
	Zombie **redZombieTeam = createRedZombie();
	Zombie **blueZombieTeam = createBlueZombie();
	mortalCombat(redZombieTeam, blueZombieTeam);
	cleanMemory(redZombieTeam, blueZombieTeam);
	return (0);
}