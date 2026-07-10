/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 19:16:23 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/10 21:08:39 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <limits>
#include <cstdlib>

//Possible casts: 
//static_cast
//dynamic_cast
//const_cast
//reinterpret_cast

void printOutput(const tOutput o)
{
	std::cout << "char: ";
	if (o.Double >= 32 && o.Double < 127)
		std::cout << o.Char << std::endl;
	else if (o.Double < 0)
		std::cout << "Impossible" << std::endl;
	else
		std::cout << "Non Displayable" << std::endl;
	if (o.Double >= -std::numeric_limits<int>::max() - 1 && o.Double <= std::numeric_limits<int>::max())
		std::cout << "int: " << o.Int << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout.precision(6);
	std::cout << "float: " << o.Float;
	if (o.Float - o.Int == 0 && o.Float < 1000000)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout.precision(15);
	std::cout << "double: " << o.Double;
	if (o.Double - o.Int == 0 && o.Double < 1000000000000000)
		std::cout << ".0";
	std::cout << std::endl;
}

void convertFromChar(tOutput* output, const std::string& s)
{
	std::cout << "detected Char" << std::endl;
	char c = s[0];

	output->Char	= c;
	output->Int		= static_cast<int>(c);
	output->Float	= static_cast<float>(c);
	output->Double	= static_cast<double>(c);
	printOutput(*output);
}

void convertFromInt(tOutput* output, const std::string& s)
{
	std::cout << "detected Int" << std::endl;
	int n = std::atoi(s.c_str());
	long l = std::atol(s.c_str());

	if (l != n)
	{
		std::cout << "Error: Integer overflow" << std::endl;
		return;
	}

	output->Char	= static_cast<char>(n);
	output->Int		= n;
	output->Float	= static_cast<float>(n);
	output->Double	= static_cast<double>(n);
	printOutput(*output);
}

void convertFromFloat(tOutput* output, const std::string& s)
{
	std::cout << "detected Float" << std::endl;
	float f;
	if (s == "nanf")
		f = std::numeric_limits<float>::quiet_NaN();
	else if (s == "+inff")
		f = std::numeric_limits<float>::infinity();
	else if (s == "-inff")
		f = -std::numeric_limits<float>::infinity();
	else
		f = atof(s.c_str());

	output->Char	= static_cast<char>(f);
	output->Int		= static_cast<int>(f);
	output->Float	= f;
	output->Double	= static_cast<double>(f);
	printOutput(*output);
}

void convertFromDouble(tOutput* output, const std::string& s)
{
	std::cout << "detected Double" << std::endl;
	double	d;
	if (s == "nan")
		d = std::numeric_limits<double>::quiet_NaN();
	else if (s == "+inf")
		d = std::numeric_limits<double>::infinity();
	else if (s == "-inf")
		d = -std::numeric_limits<double>::infinity();
	else
		d = strtod(s.c_str(), NULL);

	output->Char	= static_cast<char>(d);
	output->Int		= static_cast<int>(d);
	output->Float	= static_cast<float>(d);
	output->Double	= d;
	printOutput(*output);
}

void (*selectConverter(const std::string& s))(tOutput*, const std::string&)
{
	std::string::const_iterator it = s.begin();
	if(*it >= 32 && *it < 127 && !isdigit(*it))
	{
		it++;
		if (it == s.end())
			return (convertFromChar);
	}
	int hasDigits = 0;
	while (isdigit(*it))
	{
		hasDigits = 1;
		it++;
	}
	if (*it == '.' && hasDigits)
	{
		hasDigits = 0;
		it++;
		while (isdigit(*it))
		{
			hasDigits = 1;
			it++;
		}
		if (*it == 'f' && hasDigits)
			return (convertFromFloat);
		else if (it == s.end() && hasDigits)
			return (convertFromDouble);
	}
	else if (s == "nan" || s == "+inf" || s == "-inf")
		return (convertFromDouble);
	else if (s == "nanf" || s == "+inff" || s == "-inff")
		return (convertFromFloat);
	else if (it == s.end() && hasDigits)
		return(convertFromInt);
	return NULL;
}

void ScalarConverter::convert(const std::string &s)
{
	tOutput output;
	void (*converter)(tOutput*, const std::string&);

	converter = selectConverter(s);
	if (converter == NULL)
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "char: Impossible" << std::endl;
		std::cout << "char: Impossible" << std::endl;
		std::cout << "char: Impossible" << std::endl;
		return;
	}
	converter(&output, s);
}
