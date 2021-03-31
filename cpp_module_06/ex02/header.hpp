/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:16:25 by fflores           #+#    #+#             */
/*   Updated: 2021/03/31 16:16:25 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

#define PRINT(str) std::cout << "\033[1;35m" << str << "\033[0m" << std::endl


class Base {
public:
	virtual ~Base(){};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};


Base * generateRandomClass( void );
void identifyClassByPointer(Base * ptr);
void identifyClassByReference(Base & ptr);

#endif