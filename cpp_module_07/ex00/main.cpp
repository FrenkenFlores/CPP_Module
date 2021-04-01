/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 23:10:32 by fflores           #+#    #+#             */
/*   Updated: 2021/04/01 23:10:33 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include "Awesome.hpp"

int main( void ) {

	PRINT("Subject tests");
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	PRINT("Complex type test");
	Awesome obj1(1);
	Awesome obj2(2);
	std::cout << "before: obj1 = " << obj1.getN() << ", obj2 = " << obj2.getN() << std::endl;
	::swap( obj1, obj2 );
	std::cout << "after: obj1 = " << obj1.getN() << ", obj2 = " << obj2.getN() << std::endl;
	std::cout << "min( obj1, obj2 ) = " << ::min( obj1, obj2 ).getN() << std::endl;
	std::cout << "max( obj1, obj2 ) = " << ::max( obj1, obj2 ).getN() << std::endl;


	PRINT("Optional tests : float");
	float f1 = 0.345;
	float f2 = 42.42;
	std::cout << "before: f1 = " << f1 << ", f2 = " << f2 << std::endl;
	::swap( f1, f2 );
	std::cout << "after: f1 = " << f1 << ", f2 = " << f2 << std::endl;
	std::cout << "min( f1, f2 ) = " << ::min( f1, f2 ) << std::endl;
	std::cout << "max( f1, f2 ) = " << ::max( f1, f2 ) << std::endl;

	PRINT("Optional tests : double");
	double d1 = 0.345;
	double d2 = 42.42;
	std::cout << "before: d1 = " << d1 << ", d2 = " << d2 << std::endl;
	::swap( d1, d2 );
	std::cout << "after: d1 = " << d1 << ", d2 = " << d2 << std::endl;
	std::cout << "min( d1, d2 ) = " << ::min( d1, d2 ) << std::endl;
	std::cout << "max( d1, d2 ) = " << ::max( d1, d2 ) << std::endl;
	return 0;
}