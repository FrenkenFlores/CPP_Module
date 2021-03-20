/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:57:45 by fflores           #+#    #+#             */
/*   Updated: 2021/03/16 12:29:50 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#define ZOMBIE_NUMBER 10

#include <string>
#include <iostream>

class Zombie
{
private:
	static int _index;
	static std::string _nameArray[ZOMBIE_NUMBER]; 
	static int _healthArray[ZOMBIE_NUMBER];
	static int _powerArray[ZOMBIE_NUMBER];
	std::string _name;
	std::string _type;
	int _health;
	int _power;
public:
	Zombie(std::string name, std::string type);
	Zombie(std::string type);
	Zombie();
	~Zombie();
	void announce();
	std::string generateRandomName();
	int generateHealth();
	int generatePower();
	std::string getName();
	std::string getType();
	int getHealth();
	int getPower();
	void setHealth( int health );
};

#endif