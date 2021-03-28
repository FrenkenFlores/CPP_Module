/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 21:01:54 by fflores           #+#    #+#             */
/*   Updated: 2021/03/25 21:01:54 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant"){
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
	return;
}

void SuperMutant::takeDamage(int damage) {
	this->_hitPoints -= damage - 3;
	return;
}

SuperMutant::SuperMutant(const SuperMutant &src) {
	*this = src;
}

SuperMutant & SuperMutant::operator=(const SuperMutant &rhs) {
	_type = rhs._type;
	_hitPoints = rhs._hitPoints;
	return (*this);
}