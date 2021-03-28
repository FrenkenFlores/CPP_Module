/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 17:23:54 by fflores           #+#    #+#             */
/*   Updated: 2021/03/28 11:42:07 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Slave.hpp"
#include "Peon.hpp"

int main()
{
//	Sorcerer lee; // error
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Slave adam("Adam");
	std::cout << robert << jim << joe << adam;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(adam);
	return 0;
}