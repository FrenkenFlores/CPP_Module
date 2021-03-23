/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:47:08 by fflores           #+#    #+#             */
/*   Updated: 2021/03/23 20:47:09 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _fixedPointValue(0){
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed &Fixed::operator=(const Fixed &val) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = val._fixedPointValue;
	return (*this);
}


Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
	return;
}