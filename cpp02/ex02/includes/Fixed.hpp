/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 05:27:13 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/22 18:47:44 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int _rawBits;
		static const int _fractionalBits = 8;

	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed();

		Fixed& operator=(const Fixed &other);

		bool operator<(const Fixed &other) const;
		bool operator>(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;

		Fixed& operator+=(const Fixed &other);

		Fixed& operator+(Fixed l, const Fixed &r);
		Fixed& operator-(const Fixed &other);
		Fixed& operator*(const Fixed &other);
		Fixed& operator/(const Fixed &other);

		//prefix
		Fixed& operator++();
		Fixed& operator--();
		//postfix
		Fixed operator++(int);
		Fixed operator--(int);

		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &f);

#endif
