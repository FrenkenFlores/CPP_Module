/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:15:55 by fflores           #+#    #+#             */
/*   Updated: 2021/03/27 21:15:55 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include <iostream>

class Squad : public ISquad
{
protected:
	int	_count;
	ISpaceMarine **_squad;

private:
	bool _unitCheck(ISpaceMarine *unit);
public:
	Squad(void);
	Squad(const Squad &src);
	Squad &operator=(const Squad &rhs);
	~Squad(void);
	int getCount() const;
	ISpaceMarine * getUnit(int index) const;
	int push(ISpaceMarine *unit);
};




#endif