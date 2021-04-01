/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 23:11:19 by fflores           #+#    #+#             */
/*   Updated: 2021/04/01 23:11:19 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <vector>
#include <iostream>
#include <string>

void printHeader (const std::string & str);

template <typename T>
class	MutantStack : public std::stack<T>
{
private:
	std::vector<T> _mutant;
public:
	MutantStack(void) {
		return;
	}
	MutantStack(const MutantStack &src) {
		*this = src;
		return;
	}
	~MutantStack(void) {
		return;
	}
	MutantStack& operator = (const MutantStack &rhs)
	{
		_mutant = rhs._mutant;
		return (*this);
	}

	typedef typename std::vector<T>::iterator iterator;
	typedef typename std::vector<T>::reverse_iterator reverse_iterator;

	iterator begin(void) {
		return (_mutant.begin());
	}
	iterator end(void) {
		return (_mutant.end());
	}

	reverse_iterator rbegin(void) {
		return (_mutant.rbegin());
	}
	reverse_iterator rend(void) {
		return (_mutant.rend());
	}
	void push(T x) {
		_mutant.push_back(x);
	}
	void pop(void) {
		_mutant.pop_back();
	}
	T top(void)	{
		return (*(_mutant.end() - 1));
	}

	size_t size() {
		return (_mutant.size());
	}
};

#endif