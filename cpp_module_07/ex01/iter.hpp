/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 23:10:43 by fflores           #+#    #+#             */
/*   Updated: 2021/04/01 23:10:43 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T *ptr, size_t size, void (*f)(T const & target))
{
	for (size_t i = 0; i < size; ++i) {
		f(ptr[i]);
	}
	return;
}

#endif