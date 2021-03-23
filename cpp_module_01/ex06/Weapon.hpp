/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:46:51 by fflores           #+#    #+#             */
/*   Updated: 2021/03/23 20:46:51 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	std::string const &getType() const;
	void setType(std::string type);
private:
	std::string _type;
};

#endif