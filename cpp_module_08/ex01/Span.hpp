/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 23:11:11 by fflores           #+#    #+#             */
/*   Updated: 2021/04/01 23:11:11 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <string>
#include <iostream>
#include <exception>
#include <algorithm>

class Span
{
public:
	Span(unsigned int n);
	Span(const Span &src);
	~Span(void);
	Span &operator=(const Span &rhs);

	void			addNumber(int n);
	void			addNumbers(int a, int b);
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);
	const std::vector<int> & getV(void) const;
private:
	Span(void);
	size_t _nbr;
	std::vector<int> _v;
	struct EmptyException : public std::exception
	{
		const char * what() const throw() {
			return ("EmptyException");
		}
	};
	struct ContainerIsFull : public std::exception
	{
		const char * what() const throw() {
			return ("ContainerIsFull");
		}
	};
	struct ToFewElements : public std::exception
	{
		const char * what() const throw() {
			return ("ToFewElements");
		}
	};
};

#endif