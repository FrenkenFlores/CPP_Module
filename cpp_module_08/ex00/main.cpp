#include "easyfind.hpp"
#include <string>
#include <iostream>
#include <list>
#include <vector>
#include <array>

int main()
{
	try {
		std::cout << "\033[32mTest with list container\033[0m" << std::endl;
		std::list<int> l;
		for (int i = 0; i < 10; ++i) {
			l.push_back(i);
		}
		std::list<int>::const_iterator it0 = easyfind(l, 5);
		std::cout << *it0 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "\033[32mTest with array container\033[0m" << std::endl;
		std::array<int, 10> a;
		for (int i = 0; i < 10; ++i) {
			a.at(i) = i;
		}
		std::array<int, 10>::const_iterator it1 = easyfind(a, 5);
		std::cout << *it1 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "\033[32mTest with vector container\033[0m" << std::endl;
		std::vector<int> v;
		for (int i = 0; i < 10; ++i) {
			v.push_back(i);
		}
		std::vector<int>::const_iterator it2 = easyfind(v, 5);
		std::cout << *it2 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "\033[32mError handling test\033[0m" << std::endl;
		std::vector<int> v;
		for (int i = 0; i < 10; ++i) {
			v.push_back(i);
		}
		std::vector<int>::const_iterator it2 = easyfind(v, 15);
		std::cout << *it2 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}