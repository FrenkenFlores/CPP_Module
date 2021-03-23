/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:46:30 by fflores           #+#    #+#             */
/*   Updated: 2021/03/23 20:46:31 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *_weapon;
	std::string _name;

public:
	HumanB(std::string name);
	~HumanB();
	void attack() const;
	std::string getName();
	void setName(std::string name);
	Weapon *getWeapon();
	void setWeapon(Weapon &weapon);
};

#endif