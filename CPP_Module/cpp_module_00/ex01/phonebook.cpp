/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 18:12:25 by fflores           #+#    #+#             */
/*   Updated: 2021/03/05 18:12:27 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(int argc, char **argv)
{
	std::string input;
	while (1)
	{
		std::cin >> input;
		if (input == "ADD")
			std::cout << "ADD" << std::endl;
		else if (input == "SEARCH")
			std::cout << "SEARCH" << std::endl;
		else if (input == "EXIT")
			exit(0);
		else
			std::cout << "COMMAND NOT FOUND"<< std::endl;
	}
	return (0);
}
