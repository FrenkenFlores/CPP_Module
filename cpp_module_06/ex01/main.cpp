/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:16:15 by fflores           #+#    #+#             */
/*   Updated: 2021/03/31 16:16:15 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int		main(void)
{
	void *serial;
	Data *data;

	std::cout << "Serialize data info:" << std::endl;
	serial = serialize();

	std::cout << "Deserialize data info:" << std::endl;
	data = deserialize(serial);
	std::cout << data->str1 << " | " << data->randNumber << " | " << data->str2 << std::endl;
	delete data;
	delete (reinterpret_cast<Data *>(serial));
	return 0;
}