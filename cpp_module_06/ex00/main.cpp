/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:16:07 by fflores           #+#    #+#             */
/*   Updated: 2021/03/31 16:16:07 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <string>
#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string str(argv[1]);
		Convert a(str);
		std::cout << "char: ";
		try {
			char c = static_cast<char>(a);
			if (c >= ' ' && c <= '~')
				std::cout << "'" << c << "'" << std::endl;
			else
				std::cout << "Non displayable" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << "int: ";
		try {
			int i = static_cast<int>(a);
			std::cout << i << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << "float: ";
		try {
			float f = static_cast<float>(a);
			std::cout << f;
			if (str.find("n") != std::string::npos || (str.find(".") != std::string::npos && f != 0 ))
			{
				std::cout << "f" << std::endl;
			}
			else
			{
				std::cout << ".0f" << std::endl;
			}
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << "double: ";
		try {
			double d = static_cast<double >(a);
			std::cout << d << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	else
		std::cout << "Invalid arguments, only one argument allowed" << std::endl;
	return (0);
}
