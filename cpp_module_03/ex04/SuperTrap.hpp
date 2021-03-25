/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:20:04 by fflores           #+#    #+#             */
/*   Updated: 2021/03/25 11:20:04 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap: public NinjaTrap, virtual public FragTrap
{
public:
	SuperTrap(void);
	SuperTrap(std::string name);
	SuperTrap(const SuperTrap &src);
	~SuperTrap(void);
	SuperTrap &operator=(const SuperTrap &src);
	void rangedAttack(std::string const & target);
	void randomAttack(std::string const &target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
};

#endif