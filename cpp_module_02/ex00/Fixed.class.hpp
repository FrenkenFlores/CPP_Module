/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:47:10 by fflores           #+#    #+#             */
/*   Updated: 2021/03/23 20:47:11 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class Fixed
{
private:
	int _fixedPointValue;
	const static int _fractionalBits;
public:
	Fixed(void);
	Fixed(const Fixed &src);
	Fixed &operator=(const Fixed &val);
	virtual ~Fixed(void);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif