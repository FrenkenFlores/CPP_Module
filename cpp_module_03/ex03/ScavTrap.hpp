/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:16:54 by fflores           #+#    #+#             */
/*   Updated: 2021/03/24 22:22:58 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP
#define NUMBER_OF_ROBOTS 10

#include "Claptraps.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class ScavTrap : public Claptraps
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &src);
	~ScavTrap(void);
	ScavTrap &operator=(const ScavTrap &src);
	void rangedAttack(std::string const & target);
	void randomAttack(std::string const &target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(std::string const & target);
};

#endif