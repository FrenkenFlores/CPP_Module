/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 14:33:08 by fflores           #+#    #+#             */
/*   Updated: 2021/03/26 14:35:04 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Squad.hpp"

Squad::Squad() {
	return;
}

Squad::Squad(const Squad &src) {
	*this = src;
	return;
}

Squad::~Squad() noexcept {
	return;
}

Squad & Squad::operator=(const Squad &rhs) {

	return *this;
}