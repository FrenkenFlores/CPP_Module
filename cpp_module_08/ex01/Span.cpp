#include "Span.hpp"

unsigned int Span::shortestSpan() {
	if (_v.size() <= 1)
		throw ToFewElements();
	std::vector<int>::iterator itb = _v.begin();
	std::vector<int>::iterator ite = _v.end();
	std::vector<int>::iterator itmin1 = std::min_element(itb, ite);
	int tmp1 = *itmin1;
	*itmin1 = INT32_MAX;
	std::vector<int>::iterator itmin2 = std::min_element(itb, ite);
	int tmp2 = *itmin2 - tmp1;
	*itmin1 = tmp1;
	return tmp2;
}

unsigned int Span::longestSpan() {
	if (_v.size() <= 1)
		throw ToFewElements();
	std::vector<int>::iterator itb = _v.begin();
	std::vector<int>::iterator ite = _v.end();
	std::vector<int>::iterator itmax = std::max_element(itb, ite);
	std::vector<int>::iterator itmin = std::min_element(itb, ite);
	return (*itmax - *itmin);
}

const std::vector<int> & Span::getV() const{
	return _v;
}

Span::Span() : _nbr(0), _v(0){
	return;
}

Span::Span(unsigned int n) {
	if (n == 0)
		throw EmptyException();
	_nbr = n;
	_v.reserve(n);
	return;
}

Span::Span(const Span &src) {
	*this = src;
	return;
}

Span & Span::operator=(const Span &rhs) {
	_v = rhs._v;
	return *this;
}


Span::~Span() {
	return;
}

void Span::addNumber(int n) {
	if (_v.size() < _nbr)
		_v.push_back(n);
	else
		throw ContainerIsFull();
}


void Span::addNumbers(int a, int b) {
	int c = b - a;

	if (c > 0)
		while (a <= b)
		{
			if (_v.size() < _nbr)
				_v.push_back(a++);
			else
				throw ContainerIsFull();
		}
	else
		while (b <= a)
		{
			if (_v.size() < _nbr)
				_v.push_back(b++);
			else
				throw ContainerIsFull();
		}
}
