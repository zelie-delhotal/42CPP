/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 05:44:49 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/23 13:29:36 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <iostream>
#include <cmath>

Fixed::Fixed(): _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other): _rawBits(other._rawBits)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = i << this->_fractionalBits;
}

Fixed::Fixed(const float f)
{
	int tmp;

	std::cout << "Float constructor called" << std::endl;
	tmp = roundf(f * (1 << this->_fractionalBits));
	this->_rawBits = tmp;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_rawBits = other._rawBits;
	return (*this);
}

std::ostream& operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return out;
}

int	Fixed::getRawBits(void) const
{
	return this->_rawBits;
}

void Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

int Fixed::toInt(void) const
{
	int tmp = this->_rawBits >> this->_fractionalBits;
	/*if (tmp < 0 && this->_rawBits - tmp * 256 != 0)
		return tmp + 1;*/
	return tmp;
}

float Fixed::toFloat(void) const
{
	return ((float) this->_rawBits / (float)(1 << this->_fractionalBits));
}
