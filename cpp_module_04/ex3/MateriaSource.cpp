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
	return (*this);
}

AMateria * MateriaSource::createMateria(const std::string &type) {
	AMateria *ptr;
	for (int i = 0; i < NUMBER_OF_MATERIA; ++i) {
		if (_materia[i]->getType() == type)
			ptr = _materia[i];
	}
	std::cout << "created materia" << std::endl;
	return (ptr);
}

void MateriaSource::learnMateria(AMateria *materia) {
	static int i = 0;
	_materia[i++ % NUMBER_OF_MATERIA] = materia->clone();
	std::cout << "learned materia" << std::endl;
	return;
}