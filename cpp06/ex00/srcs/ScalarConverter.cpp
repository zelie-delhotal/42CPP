/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 19:16:23 by gdelhota          #+#    #+#             */
/*   Updated: 2026/06/29 20:39:47 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>

void ScalarConverter::convert(const std::string &s)
{
	std::stringstream	ss(s);
	char				toChar;
	int					toInt;
	float				toFloat;
	double				toDouble;

	ss >> toFloat;
	ss >> toInt;
	toChar = toInt;
	ss >> toDouble;

	std::cout << "char: " << toChar << std::endl;
	std::cout << "int: " << toInt << std::endl;
	std::cout << "float: " << toFloat << std::endl;
	std::cout << "double: " << toDouble << std::endl;
}
