/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:16:22 by fflores           #+#    #+#             */
/*   Updated: 2021/03/31 16:16:23 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void * serialize( void )
{
	Data	*data = new Data;
	char	*s1 = new char[24];
	char	*s2 = new char[24];
	char	c;
	int		i;
	int		n;

	srand(time(NULL));
	std::string random = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	for (i = 0; i < 24; i++)
	{
		c = random[rand() % (random.length() -1)];
		s1[i] = c;
		std::cout << c;
	}
	data->str1 = static_cast<std::string>(s1);
	std::cout << " | ";
	n = std::rand() % 10000;
	std::cout << n;
	data->randNumber = n;
	std::cout << " | ";
	for (i = 0; i < 24; i++)
	{
		c = random[rand() % (random.length() -1)];
		s2[i] = c;
		std::cout << c;
	}
	data->str2 = static_cast<std::string>(s2);
	std::cout << std::endl;
	delete[] s1;
	delete[] s2;
	return reinterpret_cast<void *>(data);
}


Data * deserialize( void * raw )
{
	Data *data = new Data;
	Data *tmp = reinterpret_cast<Data *>(raw);
	data->str1 = tmp->str1;
	data->randNumber = tmp->randNumber;
	data->str2 = tmp->str2;
	return data;
}

