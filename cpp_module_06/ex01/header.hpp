#ifndef HEADER_HPP
#define HEADER_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
struct Data {
	std::string str1;
	std::string str2;
	int randNumber;
};

void * serialize( void );
Data * deserialize(void * raw);

#endif