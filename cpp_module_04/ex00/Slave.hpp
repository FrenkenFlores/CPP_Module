/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Slave.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 11:30:05 by fflores           #+#    #+#             */
/*   Updated: 2021/03/28 11:30:58 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SLAVE_HPP
#define SLAVE_HPP

#include "Victim.hpp"

class Slave : public Victim
{
public:
	Slave(void);
	Slave(std::string name);
	Slave(const Slave &src);
	Slave &operator=(const Slave &rhs);
	~Slave();
	void getPolymorphed(void) const;
};



#endif