/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:16:28 by fflores           #+#    #+#             */
/*   Updated: 2021/03/27 21:16:28 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	_materiaNumber = 0;
	for (int i = 0; i < NUMBER_OF_MATERIA; ++i) {
		_materia[i] = NULL;
	}
	return;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
	*this = src;
	return;
}

MateriaSource::~MateriaSource() {
	return;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &rhs) {
	_materiaNumber = rhs._materiaNumber;
	for (int i = 0; i < NUMBER_OF_MATERIA; ++i) {
		_materia[i] = rhs._materia[i];
	}
	return (*this);
}

AMateria * MateriaSource::createMateria(const std::string &type) {
	AMateria *ptr = 0;
	for (int i = 0; i < NUMBER_OF_MATERIA && i < _materiaNumber; ++i) {
		if (_materia[i]->getType() == type)
			ptr = _materia[i];
	}
	return (ptr);
}

void MateriaSource::learnMateria(AMateria *materia) {
	if (_materiaNumber > 4)
		_materiaNumber = _materiaNumber % NUMBER_OF_MATERIA;
	_materia[_materiaNumber++] = materia->clone();
	return;
}