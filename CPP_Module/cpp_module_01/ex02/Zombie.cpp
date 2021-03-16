/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:58:42 by fflores           #+#    #+#             */
/*   Updated: 2021/03/16 08:05:52 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>
#include <ctime>

std::string Zombie::_nameArray[] = {"Refjio", "Mario" , "Santino", "Janet", \
"Fredro" , "Jozella", "Leila", "Don-Corleone", "Flores" , "Ember"};

int	Zombie::_healthArray[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int Zombie::_powerArray[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

int Zombie::_index = 0;

std::string Zombie::generateRandomName()
{
	std::srand(time(0));
	return Zombie::_nameArray[((std::rand() + _index) % ZOMBIE_NUMBER)];	
}

int Zombie::generateHealth()
{
	std::srand(time(0));
	return Zombie::_healthArray[((std::rand() + _index) % ZOMBIE_NUMBER)];	
}

int Zombie::generatePower()
{
	std::srand(time(0));
	return Zombie::_powerArray[((std::rand() + _index) % ZOMBIE_NUMBER)];	
}

Zombie::Zombie( std::string name, std::string type )
{
	this->_name = name;
	this->_type = type;
	this->_health = generateHealth();
	this->_power = generatePower();
	this->announce();
	return ;
}

Zombie::Zombie(std::string type)
{
	_index++;
	this->_name = this->generateRandomName();
	this->_type = type;
	this->_health = generateHealth();
	this->_power = generatePower();
	this->announce();
	return ;	
}

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << '<' << this->_name << " (" << this->_type << ')' << '>' << " is dead..." << std::endl;
	return ;
}

void Zombie::announce()
{
	std::cout << '<' << this->_name << " (" << this->_type << ')' << '>' << " Braiiiiiiinnnssss..." << std::endl;
	return ;
}

std::string Zombie::getName()
{
	return this->_name;
}

std::string Zombie::getType()
{
	return this->_type;
}

int Zombie::getHealth()
{
	return this->_health;
}

int Zombie::getPower()
{
	return this->_power;
}

void Zombie::setHealth( int health )
{
	this->_health = health;
}