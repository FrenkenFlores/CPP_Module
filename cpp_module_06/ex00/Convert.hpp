#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <string>
#include <exception>
#include <iostream>

class Convert
{
public:
	Convert();
	Convert(const std::string input);
	Convert(const Convert &src);
	~Convert();
	Convert & operator=(const Convert &rhs);
	operator char() const;
	operator int() const;
	operator float() const;
	operator double() const;

	struct ConversionException : std::exception
	{
		const char * what() const throw();
	};
private:
	std::string _input;
};



#endif