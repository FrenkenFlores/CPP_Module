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