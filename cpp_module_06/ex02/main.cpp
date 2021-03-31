/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:16:27 by fflores           #+#    #+#             */
/*   Updated: 2021/03/31 16:16:27 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int		main(void)
{
	Base *base;
	PRINT("IDENTIFY BY POINTER");
	for (int i = 0; i < 3; ++i) {
		base = generateRandomClass();
		identifyClassByPointer(base);
		delete base;
	}
	PRINT("IDENTIFY BY REFERENCE");
	for (int i = 0; i < 3; ++i) {
		base = generateRandomClass();
		identifyClassByReference(*base);
		delete base;
	}
	return 0;
}