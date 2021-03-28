/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:16:30 by fflores           #+#    #+#             */
/*   Updated: 2021/03/27 21:16:30 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource &src);
	MateriaSource & operator=(const MateriaSource &rhs);
	void learnMateria(AMateria *materia);
	AMateria * createMateria(const std::string &type);
private:
	AMateria *_materia[NUMBER_OF_MATERIA];
	int _materiaNumber;
};

#endif