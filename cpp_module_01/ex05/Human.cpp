/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 16:12:18 by fflores           #+#    #+#             */
/*   Updated: 2021/03/20 16:12:19 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
Human::Human(){
	return;
}

Human::~Human() {
	return;
}

std::string Human::identify() const{

	return _brain.identify();
}

Brain const &Human::getBrain() const{
	return this->_brain;
}
