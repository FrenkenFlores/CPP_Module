/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:16:54 by fflores           #+#    #+#             */
/*   Updated: 2021/03/24 22:23:01 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP
#define NUMBER_OF_ROBOTS 10

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Claptraps.hpp"

class FragTrap : public Claptraps
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &src);
	~FragTrap(void);
	FragTrap &operator=(const FragTrap &src);
	void rangedAttack(std::string const & target);
	void randomAttack(std::string const &target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
	int getVaulthunter_dot_exeDamage(void);
};

#endif