/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:16:19 by fflores           #+#    #+#             */
/*   Updated: 2021/03/27 21:16:19 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &src);
	Ice(const std::string type);
	Ice & operator=(const Ice &rhs);
	~Ice();
	AMateria * clone() const;
	void use(ICharacter &target);
};


#endif