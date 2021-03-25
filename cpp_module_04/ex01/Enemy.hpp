/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 20:29:08 by fflores           #+#    #+#             */
/*   Updated: 2021/03/25 20:29:09 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>

class Enemy
{
protected:
	int _hitPoints;
	std::string _type;
public:
	Enemy(void);
	Enemy(const Enemy &src);
	Enemy &operator=(const Enemy &rhs);
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int damage);
};



#endif