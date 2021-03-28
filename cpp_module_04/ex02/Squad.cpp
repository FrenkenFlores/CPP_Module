/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:15:50 by fflores           #+#    #+#             */
/*   Updated: 2021/03/27 21:15:51 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _count(0), _squad(NULL){
	return;
}

Squad::Squad(const Squad &src) {
	_count = src._count;
	_squad = new ISpaceMarine *[src._count];
	for (int i = 0; i < _count; ++i) {
		_squad[i] = src._squad[i];
	}
	return;
}

Squad & Squad::operator=(const Squad &rhs) {
	if (this == &rhs)
		return (*this);
	delete[] _squad;
	_squad = new ISpaceMarine *[rhs._count];
	_count = rhs._count;
	for (int i = 0; i < _count; ++i) {
		_squad[i] = rhs._squad[i];
	}
	return (*this);
}

bool Squad::_unitCheck(ISpaceMarine *unit) {
	for(int i = 0; i < _count; i++)
		if (_squad[i] == unit)
			return (1);
	return (0);
}


ISpaceMarine * Squad::getUnit(int index) const {
	if (index >= 0 && index <= _count && _squad)
		return (_squad[index]);
	return (NULL);
}

int Squad::push(ISpaceMarine *unit) {
	if (unit)
	{
		if (!_unitCheck(unit))
		{
			ISpaceMarine **tmp = new ISpaceMarine *[_count + 1];
			if (_squad)
			{
				for (int i = 0; i < _count; ++i)
					tmp[i] = _squad[i];
				delete [] _squad;
			}
			_squad = tmp;
			_squad[_count++] = unit;
		}
	}
	return (_count);
}

int Squad::getCount() const {
	return (_count);
}

Squad::~Squad() {
	delete[] _squad;
	return;
}