/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 21:14:57 by fflores           #+#    #+#             */
/*   Updated: 2021/03/28 12:12:27 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REDSCORPION_HPP
#define REDSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion(void);
	RadScorpion(const RadScorpion &src);
	RadScorpion & operator=(const RadScorpion &rhs);
	~RadScorpion(void);
};

#endif
