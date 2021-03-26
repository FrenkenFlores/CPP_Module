/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 14:33:02 by fflores           #+#    #+#             */
/*   Updated: 2021/03/26 14:36:27 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
#define ISQUAD_HPP

#include "ISpaceMarine.hpp"

class ISquad
{
public:
virtual ~ISquad() {}
virtual int getCount() const = 0;
virtual ISpaceMarine* getUnit(int) const = 0;
virtual int push(ISpaceMarine*) = 0;
};


#endif