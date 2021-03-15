/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:57:02 by fflores           #+#    #+#             */
/*   Updated: 2021/03/15 23:32:22 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main(void)
{
	ZombieEvent z;
	z.setZombieType("dark");
	z.newZombie("Tom");
	z.randomChump();
	z.randomChump();
	z.randomChump();
	z.randomChump();

	return (0);
}