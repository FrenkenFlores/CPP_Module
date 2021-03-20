/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:00:31 by fflores           #+#    #+#             */
/*   Updated: 2021/03/16 15:33:27 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP

#include <string>
#include "Zombie.hpp"
class ZombieHorde
{
public:
    ZombieHorde( int N );
    ~ZombieHorde();
	void announce();
    int getNumber();
    Zombie *getZombies();
private:
    Zombie *_zombies;
    int _number;
};

#endif