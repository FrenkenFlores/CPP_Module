/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 23:11:15 by fflores           #+#    #+#             */
/*   Updated: 2021/04/01 23:11:16 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	printHeader("Push/Pop/Size/Top tests");
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top value: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(5);
	mstack.push(44);
	mstack.push(23);
	mstack.pop();
	mstack.push(55);
	mstack.push(15);
	mstack.push(999);
	std::cout << "Top value: " << mstack.top() << std::endl;
	std::cout << "Size: " << mstack.size() << std::endl;
	printHeader("iterators tests");
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}
	std::stack<int> s(mstack);
	return 0;
}