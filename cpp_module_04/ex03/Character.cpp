/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:16:07 by fflores           #+#    #+#             */
/*   Updated: 2021/03/27 21:16:08 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	_materiaNumber = 0;
	_name = "";
	for (int i = 0; i < NUMBER_OF_MATERIA; ++i) {
		_materia[i] = NULL;
	}
	return;
}

Character::Character(const std::string &name) {
	_materiaNumber = 0;
	_name = name;
	for (int i = 0; i < NUMBER_OF_MATERIA; ++i) {
		_materia[i] = NULL;
	}
	return;
}

Character::Character(const Character &src) {
	_name = src._name;
	_materiaNumber = src._materiaNumber;
	for (int i = 0; i < NUMBER_OF_MATERIA; ++i) {
		if (src._materia[i])
			_materia[i] = src._materia[i]->clone();
		else
			_materia[i] = NULL;
	}
	return;
}

Character & Character::operator=(const Character &rhs) {

	for (int i = 0; i < NUMBER_OF_MATERIA; ++i) {
		if (_materia[i])
			delete _materia[i];
	}
	_materiaNumber = rhs._materiaNumber;
	_name = rhs._name;
	for (int i = 0; i < NUMBER_OF_MATERIA; ++i) {
		if (rhs._materia[i])
			_materia[i] = rhs._materia[i]->clone();
		else
			_materia[i] = NULL;
	}
	return (*this);
}

Character::~Character() {
	for (int i = 0; i < NUMBER_OF_MATERIA; ++i) {
		if (_materia[i])
			delete _materia[i];
	}
	return;
}

void Character::equip(AMateria *m) {
	if (_materiaNumber < NUMBER_OF_MATERIA)
		_materia[_materiaNumber++] = m->clone();
	return;
}

void Character::unequip(int idx) {
	if (idx <= _materiaNumber)
	{
		_materiaNumber--;
		delete _materia[idx];
		_materia[idx] = NULL;
	}
	return;
}

void Character::use(int idx, ICharacter &target) {
	if (idx <= _materiaNumber && idx < NUMBER_OF_MATERIA && _materia[idx])
		_materia[idx]->use(target);
	return;
}

const std::string & Character::getName() const {
	return _name;
}