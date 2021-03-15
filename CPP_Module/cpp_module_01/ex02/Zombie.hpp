/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:57:45 by fflores           #+#    #+#             */
/*   Updated: 2021/03/15 23:55:03 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
	static int _index;
	static std::string _nameArray[10]; 
	std::string _name;
	std::string _type;
public:
	Zombie(std::string name, std::string type);
	Zombie(std::string type);
	~Zombie();
	void announce();
	std::string generateRandomName();
};

#endif