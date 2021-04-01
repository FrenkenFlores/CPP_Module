/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 23:11:06 by fflores           #+#    #+#             */
/*   Updated: 2021/04/01 23:11:07 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main()
{
	{
		std::cout << "\033[32mSubject tests\033[0m" << std::endl;
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "\033[32mException tests\033[0m" << std::endl;
		try {
			Span sp = Span(0);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			Span sp1 = Span(2);
			sp1.addNumber(5);
			sp1.addNumber(5);
			sp1.addNumber(5);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			Span sp2 = Span(1);
			sp2.longestSpan();
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			Span sp3 = Span(1);
			sp3.shortestSpan();
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}