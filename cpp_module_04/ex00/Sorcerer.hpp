/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 17:23:42 by fflores           #+#    #+#             */
/*   Updated: 2021/03/25 17:31:58 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string _name;
	std::string	_title;

public:
	Sorcerer(void);
	Sorcerer(std::string name, std::string title);
	Sorcerer &operator=(const Sorcerer &rhs);
	Sorcerer(const Sorcerer &src);
	~Sorcerer(void);
	void introduce(void) const;
	void polymorph(Victim const &) const;
	std::string getName(void) const;
	std::string getTitle(void) const;
};

std::ostream &operator<<(std::ostream &out, const Sorcerer &src);

#endif