/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:16:02 by fflores           #+#    #+#             */
/*   Updated: 2021/03/31 16:16:03 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() {
	return;
}

Convert::Convert(const std::string input) {
	_input = input;
}

Convert::Convert(const Convert &src) {
	*this = src;
	return;
}

Convert::~Convert() {
	return;
}

Convert & Convert::operator=(const Convert &rhs) {
	_input = rhs._input;
	return (*this);
}

const char * Convert::ConversionException::what() const throw() {
	return ("impossible");
}

Convert::operator char() const {
	try {
		int i = std::stoi(_input);
		char c = static_cast<char>(i);
		return c;
	}
	catch (std::exception &e)
	{
		throw ConversionException();
	}
}

Convert::operator int() const {
	try {
		int i = std::stoi(_input);
		return i;
	}
	catch (std::exception &e)
	{
		throw ConversionException();
	}
}

Convert::operator float() const {
	try {
		float f = std::stof(_input);
		return f;
	}
	catch (std::exception &e)
	{
		throw ConversionException();
	}
}

Convert::operator double() const {
	try {
		double d = std::stod(_input);
		return d;
	}
	catch (std::exception &e)
	{
		throw ConversionException();
	}
}