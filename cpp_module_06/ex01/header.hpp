/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:16:12 by fflores           #+#    #+#             */
/*   Updated: 2021/03/31 16:16:12 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
struct Data {
	std::string str1;
	std::string str2;
	int randNumber;
};

void * serialize( void );
Data * deserialize(void * raw);

#endif