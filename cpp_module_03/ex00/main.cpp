/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:16:58 by fflores           #+#    #+#             */
/*   Updated: 2021/03/24 11:16:59 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#ifndef NUM

int main(void)
{
	std::cout << "BATTLE"<< std::endl;
	FragTrap    jack("Jack");
	FragTrap    rumpelstiltskin("Rumpelstiltskin");

	std::cout << std::endl << "ROUND 1" << std::endl;
	jack.meleeAttack(rumpelstiltskin.getName());
	rumpelstiltskin.takeDamage(jack.getMeleeAttackDamage());

	std::cout << std::endl << "ROUND 2" << std::endl;
	rumpelstiltskin.rangedAttack(jack.getName());
	jack.takeDamage(rumpelstiltskin.getRangedAttackDamage());

	std::cout << std::endl << "ROUND 3" << std::endl;
	jack.vaulthunter_dot_exe(rumpelstiltskin.getName());
	rumpelstiltskin.takeDamage(jack.getVaulthunter_dot_exeDamage());

	return (0);
}

#elif NUM == 1

int
main(void)
{
	FragTrap a;
	FragTrap b (a);
	FragTrap c;

	c = b;
	std::cout << a.getName() << " : " << a.getId() << std::endl;
	std::cout << b.getName() << " : " <<  b.getId() << std::endl;
	std::cout << c.getName() << " : " <<  c.getId() << std::endl;

	FragTrap d("TBot");
	std::cout << d.getName() << " : " <<  d.getId() << std::endl;
    FragTrap r[NUMBER_OF_ROBOTS];
    int i = 0;
	while (i < NUMBER_OF_ROBOTS)
	{
		std::cout << "Id: " << r[i].getId() << std::endl << \
		"Name: " << r[i].getName() << std::endl << \
		"RandomAttackDamage: " << r[i].getRandomAttackDamage() << std::endl << \
		"MeleeAttackDamage" << r[i].getMeleeAttackDamage() << std::endl << \
		"RangedAttackDamage" << r[i].getRangedAttackDamage() << std::endl;
		i++;
	}
    return (0);
}

#elif NUM == 2

int main(void)
{
	FragTrap robot("Peter");

	robot.rangedAttack("human");
	robot.meleeAttack("another robot");
	robot.takeDamage(30);
	robot.takeDamage(50);
	robot.takeDamage(30);
	robot.beRepaired(80);
	robot.beRepaired(30);
	robot.vaulthunter_dot_exe("aliens ship");
	robot.vaulthunter_dot_exe("aliens ship");
	robot.vaulthunter_dot_exe("aliens ship");

	return (0);
}

#elif NUM == 3

int main(void)
{
	FragTrap redRobot;
	FragTrap blueRobot;

	redRobot.meleeAttack(blueRobot.getName());
	blueRobot.takeDamage(redRobot.getMeleeAttackDamage());
	redRobot.rangedAttack((blueRobot.getName()));
	blueRobot.takeDamage(redRobot.getRangedAttackDamage());
	redRobot.vaulthunter_dot_exe(blueRobot.getName());
	blueRobot.takeDamage(redRobot.getVaulthunter_dot_exeDamage());
	blueRobot.beRepaired(10);
	blueRobot.beRepaired(20);
	blueRobot.beRepaired(30);
	blueRobot.beRepaired(40);
	blueRobot.beRepaired(10);
	blueRobot.beRepaired(10);
	blueRobot.beRepaired(10);
	return (0);
}

#endif