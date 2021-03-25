/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:16:40 by fflores           #+#    #+#             */
/*   Updated: 2021/03/25 19:16:40 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>
#include <iostream>

class AWeapon
{
protected:
	std::string _name;
	int _damagePoints;
	int _actionPoints;
public:
	AWeapon(void);
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon &src);
	AWeapon& operator=(const AWeapon &rhs);
	virtual ~AWeapon(void);
	std::string getName(void) const;
	int getAPCost(void) const;
	int getDamage(void) const;
	virtual void attack(void) const = 0;
};

#endif