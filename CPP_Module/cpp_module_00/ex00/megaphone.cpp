/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 16:00:23 by fflores           #+#    #+#             */
/*   Updated: 2021/03/05 16:00:28 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void capitalizeString(char *str)
{
	int i = 0;
	char c;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			c = str[i] - 32;
		else
			c = str[i];
		std::cout << c;
		i++;
	}
	
}

int main(int argc, char **argv)
{
	int i = 1;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i != argc)
		{
			capitalizeString(argv[i]);
			i++;
		}
		std::cout << std::endl;
	}	
}