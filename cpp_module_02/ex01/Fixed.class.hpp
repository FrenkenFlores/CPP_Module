/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:47:23 by fflores           #+#    #+#             */
/*   Updated: 2021/03/23 20:47:24 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

typedef uint32_t fixed_point_t;

class Fixed
{
private:
	fixed_point_t _fixedPointValue;
	const static int _fractionalBits;
public:
	Fixed(void);
	Fixed(const int val);
	Fixed(const float val);
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed(const Fixed &src);
	Fixed &operator=(const Fixed &val);
	virtual ~Fixed(void);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

std::ostream &operator<<(std::ostream &os, const Fixed &src);

#endif