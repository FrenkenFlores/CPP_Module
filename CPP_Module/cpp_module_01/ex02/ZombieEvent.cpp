/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 22:32:51 by fflores           #+#    #+#             */
/*   Updated: 2021/03/15 23:47:07 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

void ZombieEvent::setZombieType( std::string type )
{
	this->_type = type;
	return ;
}

Zombie *ZombieEvent::newZombie( std::string name )
{
	Zombie *z = new Zombie(name, this->_type);
	return z;
}

Zombie *ZombieEvent::randomChump()
{
	Zombie *z = new Zombie(this->_type);
	return z;
}