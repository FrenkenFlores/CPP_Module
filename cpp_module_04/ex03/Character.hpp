/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:16:09 by fflores           #+#    #+#             */
/*   Updated: 2021/03/27 21:16:09 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class Character : public ICharacter
{
private:
	int _materiaNumber;
	std::string	_name;
	AMateria *_materia[NUMBER_OF_MATERIA];
public:
	Character();
	Character(const std::string &name);
	Character(const Character &src);
	~Character();
	Character & operator=(const Character &rhs);
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
	std::string const & getName() const;
};

#endif
