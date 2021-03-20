/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:27:03 by fflores           #+#    #+#             */
/*   Updated: 2021/03/15 18:03:43 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony( std::string str )
{
	name = str;
	std::cout << "pony " << name << " is created" << std::endl;
}

void Pony::printName(void)
{
	std::cout << "I am " << this->name << std::endl;
}

Pony::~Pony()
{
	std::cout << "pony " << name << " is destroyed" << std::endl;
}