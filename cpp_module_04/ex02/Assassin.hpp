/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Assassin.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:15:33 by fflores           #+#    #+#             */
/*   Updated: 2021/03/27 21:15:34 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSASSIN_HPP
#define ASSASSIN_HPP
#include "ISpaceMarine.hpp"
#include <iostream>

class Assassin : public ISpaceMarine
{
public:
	Assassin(void);
	Assassin(const Assassin &src);
	Assassin & operator=(const Assassin &rhs);
	~Assassin(void);
	ISpaceMarine * clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};


#endif