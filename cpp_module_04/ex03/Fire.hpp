/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 10:21:28 by fflores           #+#    #+#             */
/*   Updated: 2021/03/28 10:21:29 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIRE_HPP
#define FIRE_HPP

#include "AMateria.hpp"

class Fire : public AMateria
{
public:
	Fire();
	Fire(const Fire &src);
	Fire(const std::string type);
	Fire & operator=(const Fire &rhs);
	~Fire();
	AMateria * clone() const;
	void use(ICharacter &target);
};

#endif