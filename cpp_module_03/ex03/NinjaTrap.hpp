/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 23:11:18 by fflores           #+#    #+#             */
/*   Updated: 2021/03/24 23:11:20 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
#define NINJA_TRAP_HPP

#include "Claptraps.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class NinjaTrap : public Claptraps
{
public:
	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(const NinjaTrap &rhs);
	~NinjaTrap(void);
	NinjaTrap &operator=(const NinjaTrap &src);
	void ninjaShoebox(const NinjaTrap &target);
	void ninjaShoebox(const ScavTrap &target);
	void ninjaShoebox(const FragTrap &target);
	void rangedAttack(std::string const & target);
	void randomAttack(std::string const &target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
};

#endif