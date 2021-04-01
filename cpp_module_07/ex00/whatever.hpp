/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 23:10:39 by fflores           #+#    #+#             */
/*   Updated: 2021/04/01 23:10:40 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <string>
#include <iostream>
#define PRINT(str) std::cout << "\033[1;32m" << str << "\033[0m" << std::endl


template <typename T>
void swap(T &obj1, T &obj2) {
	T tmp = obj1;
	obj1 = obj2;
	obj2 = tmp;
	return;
}

template <typename T>
const T & min(const T & obj1, const T &obj2) {
	return (obj1 < obj2 ? obj1 : obj2);
}

template <typename T>
const T & max(const T & obj1, const T &obj2) {
	return (obj1 > obj2 ? obj1 : obj2);
}

#endif