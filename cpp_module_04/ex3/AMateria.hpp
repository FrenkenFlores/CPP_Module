/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:16:05 by fflores           #+#    #+#             */
/*   Updated: 2021/03/27 21:16:06 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#define NUMBER_OF_MATERIA 4
#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
	unsigned int _xp;
	std::string	_type;
public:
	AMateria(void);
	AMateria(const AMateria &src);
	AMateria(std::string const & type);
	AMateria & operator=(const AMateria &rhs);
	virtual ~AMateria();
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif