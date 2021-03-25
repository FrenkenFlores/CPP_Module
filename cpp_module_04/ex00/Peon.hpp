/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 17:23:49 by fflores           #+#    #+#             */
/*   Updated: 2021/03/25 17:23:50 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon(void);
	Peon(std::string name);
	Peon(const Peon &src);
	Peon &operator=(const Peon &rhs);
	~Peon();
	void getPolymorphed(void) const;
};



#endif