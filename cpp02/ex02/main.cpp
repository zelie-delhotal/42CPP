/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 05:43:43 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/23 01:31:55 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <iostream>

int main( void )
{
	{
		std::cout << "Default Constructor:" << std::endl;
		Fixed a;
		std::cout << "Copy Constructor:" << std::endl;
		Fixed b(a);
		std::cout << "Int Constructor:" << std::endl;
		Fixed c(42);
		std::cout << "Float Constructor:" << std::endl;
		Fixed d(123.456f);
		std::cout << "0: " << a << std::endl;
		std::cout << "0: " << b << std::endl;
		std::cout << "42: " << c << std::endl;
		std::cout << "123.456: " << d << std::endl;
		std::cout << "Assignment operator:" << std::endl;
		d = c;
		std::cout << "42: " << d << std::endl;
		std::cout << "Destructor x4:" << std::endl;
	}
	{
		Fixed a(5);
		Fixed b(3.14f);
		Fixed c(0);
		Fixed d(-3);
		Fixed e(-3.14f);
		Fixed f(-3);
		std::cout << "Addition:" << std::endl;
		std::cout << a << '+' << b << '=' << (a + b) << std::endl;
		std::cout << "Incrementations: " << std::endl;
		std::cout << "5: " << a++ <<std::endl;
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;

		std::cout << "Comparisons:" << std::endl;
		std::cout << a << " < " << b << ": " << (a < b) << std::endl;
		std::cout << a << " < " << c << ": " << (a < c) << std::endl;
		std::cout << a << " < " << d << ": " << (a < d) << std::endl;
		std::cout << d << " < " << e << ": " << (a < e) << std::endl;
		std::cout << d << " < " << f << ": " << (d < f) << std::endl;

		std::cout << a << " <= " << b << ": " << (a <= b) << std::endl;
		std::cout << a << " <= " << c << ": " << (a <= c) << std::endl;
		std::cout << a << " <= " << d << ": " << (a <= d) << std::endl;
		std::cout << d << " <= " << e << ": " << (a <= e) << std::endl;
		std::cout << d << " <= " << f << ": " << (d <= f) << std::endl;

		std::cout << a << " > " << b << ": " << (a > b) << std::endl;
		std::cout << a << " > " << c << ": " << (a > c) << std::endl;
		std::cout << a << " > " << d << ": " << (a > d) << std::endl;
		std::cout << a << " > " << e << ": " << (a > e) << std::endl;
		std::cout << d << " > " << f << ": " << (d > f) << std::endl;

		std::cout << a << " >= " << b << ": " << (a >= b) << std::endl;
		std::cout << a << " >= " << c << ": " << (a >= c) << std::endl;
		std::cout << a << " >= " << d << ": " << (a >= d) << std::endl;
		std::cout << d << " >= " << e << ": " << (a >= e) << std::endl;
		std::cout << d << " >= " << f << ": " << (d >= f) << std::endl;

		std::cout << a << " == " << b << ": " << (a == b) << std::endl;
		std::cout << a << " == " << a << ": " << (a == c) << std::endl;
		std::cout << a << " == " << d << ": " << (a == d) << std::endl;
		std::cout << d << " == " << e << ": " << (a == e) << std::endl;
		std::cout << d << " == " << f << ": " << (d == f) << std::endl;

		std::cout << a << " != " << b << ": " << (a != b) << std::endl;
		std::cout << a << " != " << c << ": " << (a != c) << std::endl;
		std::cout << a << " != " << d << ": " << (a != d) << std::endl;
		std::cout << d << " != " << e << ": " << (a != e) << std::endl;
		std::cout << d << " != " << f << ": " << (d != f) << std::endl;

		std::cout << "max " << a << " " << b << ": " << Fixed::max(a, b) << std::endl;
		std::cout << "max " << d << " " << b << ": " << Fixed::max(d, b) << std::endl;
		std::cout << "max " << b << " " << a << ": " << Fixed::max(b, a) << std::endl;

		std::cout << "min " << a << " " << b << ": " << Fixed::min(a, b) << std::endl;
		std::cout << "min " << d << " " << b << ": " << Fixed::min(d, b) << std::endl;
		std::cout << "min " << b << " " << a << ": " << Fixed::min(b, a) << std::endl;
	}
	{
		Fixed a(1.5f);
		Fixed b(2);
		Fixed c(-3);

		std::cout << a << "*" << b << "=" << (a * b) << std::endl;
		std::cout << c << "*" << b << "=" << (c * b) << std::endl;
		std::cout << a << "*" << c << "=" << (a * c) << std::endl;

		std::cout << a << "-" << b << "=" << (a - b) << std::endl;
		std::cout << c << "-" << b << "=" << (c - b) << std::endl;
		std::cout << a << "-" << c << "=" << (a - c) << std::endl;

		std::cout << a << "/" << c << "=" << (a / c) << std::endl;
		std::cout << c << "/" << b << "=" << (c / b) << std::endl;
		std::cout << c << "/" << a << "=" << (c / a) << std::endl;
	}
	return 0;
}
