/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 21:15:00 by fflores           #+#    #+#             */
/*   Updated: 2021/03/28 12:14:05 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion"){
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
	return;
}

RadScorpion::RadScorpion(const RadScorpion &src) {
	*this = src;
}

RadScorpion & RadScorpion::operator=(const RadScorpion &rhs) {
	_type = rhs._type;
	_hitPoints = rhs._hitPoints;
	return (*this);
}