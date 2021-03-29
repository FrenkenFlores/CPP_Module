/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 20:29:11 by fflores           #+#    #+#             */
/*   Updated: 2021/03/25 20:29:12 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() {
	return;
}

Enemy::Enemy(const Enemy &src) {
	*this = src;
	return;
}

Enemy::Enemy(int hp, const std::string &type) {
	this->_hitPoints = hp;
	this->_type = type;
	return;
}

Enemy & Enemy::operator=(const Enemy &rhs) {
	this->_type = rhs._type;
	this->_hitPoints = rhs._hitPoints;
	return (*this);
}

Enemy::~Enemy() {
	return;
}

int Enemy::getHP() const {
	return (_hitPoints);
}

std::string Enemy::getType() const {
	return (_type);
}

void Enemy::takeDamage(int damage) {
	_hitPoints -= damage;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "Enemy <" << getType() << "> is left with <" << getHP() << "> HP" << std::endl;

	return;
}