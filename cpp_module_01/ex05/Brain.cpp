/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 16:12:09 by fflores           #+#    #+#             */
/*   Updated: 2021/03/20 16:12:10 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	setAddress();
	return ;
}

Brain::~Brain(){
	return ;
}

void Brain::setAddress() {
	std::stringstream tmp;
	tmp << this;
	_address = tmp.str();
	return;
}

std::string Brain::getAddress() const{
	return (this->_address);
}

std::string Brain::identify() const{
	return (getAddress());
}
