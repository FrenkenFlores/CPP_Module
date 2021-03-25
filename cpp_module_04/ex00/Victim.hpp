/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 17:23:36 by fflores           #+#    #+#             */
/*   Updated: 2021/03/25 17:30:36 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>
#include <sstream>

class Victim
{
protected:
	std::string _name;

public:
	Victim(void);
	Victim(std::string name);
	Victim &operator=(const Victim &rhs);
	Victim(const Victim &src);
	~Victim(void);
	void introduce(void) const;
	std::string getName(void) const;
	virtual void getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &out, const Victim &src);

#endif