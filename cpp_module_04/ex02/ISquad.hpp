/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:15:46 by fflores           #+#    #+#             */
/*   Updated: 2021/03/27 21:15:46 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD
#define ISQUAD

#include "ISpaceMarine.hpp"

class ISquad
{
protected:
	int _count;
public:
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;
};

#endif