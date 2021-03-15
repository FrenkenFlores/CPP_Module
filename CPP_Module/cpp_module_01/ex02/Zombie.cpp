/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:58:42 by fflores           #+#    #+#             */
/*   Updated: 2021/03/16 00:23:33 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>
#include <ctime>

std::string Zombie::_nameArray[] = {"Refjio", "Mario" , "Santino", "Janet", \
"Fredro" , "Jozella", "Leila", "Don-Corleone", "Flores" , "Ember"};
int Zombie::_index = 0;

std::string Zombie::generateRandomName()
{
	std::srand(time(0));
	return Zombie::_nameArray[((std::rand() + _index) % 10)];	
}

Zombie::Zombie( std::string name, std::string type )
{
	this->_name = name;
	this->_type = type;
	this->announce();
	return ;
}

Zombie::Zombie(std::string type)
{
	_index++;
	this->_name = this->generateRandomName();
	this->_type = type;
	this->announce();
	return ;	
}

Zombie::~Zombie()
{
	return ;
}

void Zombie::announce()
{
	std::cout << '<' << this->_name << " (" << this->_type << ')' << '>' << "Braiiiiiiinnnssss..." << std::endl;
	return ;
}