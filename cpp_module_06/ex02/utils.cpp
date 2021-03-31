/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:16:31 by fflores           #+#    #+#             */
/*   Updated: 2021/03/31 16:16:32 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Base * generateRandomClass( void )
{
	static int i = 0;
	srand(time(NULL));
	int randomNumber =  (i++ + rand()) % 3;
	if (randomNumber == 0)
	{
		std::cout << "Generated class A" << std::endl;
		return (new A());
	}
	else if (randomNumber == 1)
	{
		std::cout << "Generated class B" << std::endl;
		return (new B());
	}
	else if (randomNumber == 2)
	{
		std::cout << "Generated class C" << std::endl;
		return (new C());
	}
	else
		return (NULL);
}


void identifyClassByPointer(Base * ptr)
{
	if (dynamic_cast<A *>(ptr))
		std::cout << "Class A" << std::endl;
	else if (dynamic_cast<B *>(ptr))
		std::cout << "Class B" << std::endl;
	else if (dynamic_cast<C *>(ptr))
		std::cout << "Class C" << std::endl;
	else
		std::cout << "Unknown class" << std::endl;
}

void identifyClassByReference(Base & ptr)
{
	if (dynamic_cast<A *>(&ptr))
		std::cout << "Class A" << std::endl;
	else if (dynamic_cast<B *>(&ptr))
		std::cout << "Class B" << std::endl;
	else if (dynamic_cast<C *>(&ptr))
		std::cout << "Class C" << std::endl;
	else
		std::cout << "Unknown class" << std::endl;
}