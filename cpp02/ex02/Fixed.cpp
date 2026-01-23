/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 05:44:49 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/23 00:40:01 by gdelhota         ###   ########.fr       */
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
	tmp = roundf(f * 256.0f);
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

bool Fixed::operator<(const Fixed &other) const
{
	return (this->_rawBits < other.getRawBits());
}

bool Fixed::operator>(const Fixed &other) const
{
	return (other < *this);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return !(*this > other);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return !(*this < other);
}

int	Fixed::getRawBits(void) const
{
	return this->_rawBits;
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->_rawBits == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const
{
	return !(*this == other);
}

Fixed& Fixed::operator++()
{
	this->_rawBits++;
	return *this;
}

Fixed& Fixed::operator--()
{
	this->_rawBits--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed old = *this;
	operator++();
	return old;
}

Fixed Fixed::operator--(int)
{
	Fixed old = *this;
	operator--();
	return old;
}

Fixed Fixed::operator+(const Fixed &other)
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other)
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other)
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other)
{
	return Fixed(this->toFloat() / other.toFloat());
}

void Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

int Fixed::toInt() const
{
	int tmp = this->_rawBits >> this->_fractionalBits;
	if (tmp < 0 && this->_rawBits - tmp * 256 != 0)
		return tmp + 1;
	return tmp;
}

float Fixed::toFloat() const
{
	return ((float) this->_rawBits / 256.0f);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	return (a<b?a:b);
}
	
Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	return (a>b?a:b);
}
	
const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a<b?a:b);
}
	
const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a>b?a:b);
}
	
