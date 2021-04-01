/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 23:11:00 by fflores           #+#    #+#             */
/*   Updated: 2021/04/01 23:11:01 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <exception>

struct ERROR : public std::exception {
	char const * what() const throw() {
		return "Could not find the specified unit";
	}
};

template <typename T>
typename T::const_iterator easyfind(const T x, const int y) {
	typename T::const_iterator it, itb, ite;
	itb = x.begin();
	ite = x.end();
	it = std::find (itb, ite, y);
	if (it == ite)
		throw ERROR();
	return it;
}

#endif
