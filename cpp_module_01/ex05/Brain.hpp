/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 16:12:26 by fflores           #+#    #+#             */
/*   Updated: 2021/03/20 16:12:27 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <sstream>
#include <cstdlib>

class Brain
{
public:
	Brain();
	~Brain();
	void setAddress();
	std::string getAddress() const;
	std::string identify() const;
private:
	std::string _address;
};

#endif
