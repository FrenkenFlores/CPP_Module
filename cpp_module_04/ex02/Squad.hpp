/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 14:33:10 by fflores           #+#    #+#             */
/*   Updated: 2021/03/26 14:38:17 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"

typedef struct	s_squad
{
	ISpaceMarine *marine;
	struct s_squad *next;
}				t_squad;


class Squad : public ISquad
{
private:
	int _count;
	t_squad *squad;

public:
	Squad(void);
	Squad(const Squad &src);
	Squad &operator=(const Squad &rhs);
	~Squad();
	int getCount() const;
	ISpaceMarine * getUnit(int) const;
	int push(ISpaceMarine *);
};

#endif