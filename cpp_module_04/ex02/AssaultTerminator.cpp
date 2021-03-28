/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:15:36 by fflores           #+#    #+#             */
/*   Updated: 2021/03/27 21:15:36 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout <<  "* teleports from space *" << std::endl;
	return;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &src) {
	*this = src;
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator & AssaultTerminator::operator=(const AssaultTerminator &rhs) {
	(void)rhs;
	return (*this);
}

ISpaceMarine * AssaultTerminator::clone() const {
	AssaultTerminator *tmp = new AssaultTerminator;
	return (tmp);
}

void AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
	return;
}

void AssaultTerminator::rangedAttack() const {
	std::cout <<  "* does nothing *" << std::endl;
	return;
}

void AssaultTerminator::meleeAttack() const {
	std::cout <<  "* attacks with chainfists *" << std::endl;
	return;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I’ll be back..." << std::endl;
	return;
}