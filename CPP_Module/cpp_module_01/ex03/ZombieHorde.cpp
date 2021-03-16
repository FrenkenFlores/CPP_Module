/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:02:53 by fflores           #+#    #+#             */
/*   Updated: 2021/03/16 16:55:45 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde( int N )
{
	this->_number = N;
	this->_zombies = new Zombie[N];
	return ;
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->_zombies;
	return ;
}

int ZombieHorde::getNumber()
{
	return _number;
}

Zombie *ZombieHorde::getZombies()
{
	return _zombies;
}

void ZombieHorde::announce()
{
	int i = 0;
	while (i < _number)
	{
		this->_zombies[i].announce();
		i++;
	}
	return ;
}