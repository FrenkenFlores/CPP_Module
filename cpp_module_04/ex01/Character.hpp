/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 20:29:19 by fflores           #+#    #+#             */
/*   Updated: 2021/03/25 20:29:19 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <string>
#include <iostream>
class Character
{
protected:
	std::string _name;
	int	_actionPoints;
	AWeapon *_weapon;
public:
	Character(void);
	Character(const Character *src);
	Character &operator=(const Character &rhs);
	Character(std::string const & name);
	virtual ~Character(void);
	void recoverAP(void);
	void equip(AWeapon* weapon);
	void unequip(void);
	void attack(Enemy* enemy);
	std::string getName(void) const;
	int getActionPoints(void) const;
	AWeapon *getWeapon(void) const;
};

std::ostream &operator<<(std::ostream &out, const Character &src);

#endif