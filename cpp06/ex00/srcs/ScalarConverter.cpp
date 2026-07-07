/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 19:16:23 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/07 15:09:58 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <limits>

void convertFromChar(tOutput* output, const std::string& s)
{
	char c = s[0];

	output->Char	= c;
	output->Int		= (int) c;
	output->Float	= (float) c;
	output->Double	= (double) c;
}

void convertFromInt(tOutput* output, const std::string& s)
{
	(void) output;
	(void) s;
}

void convertFromFloat(tOutput* output, const std::string& s)
{
	(void) s;
	float f = std::numeric_limits<float>::quiet_NaN();

	output->Float	= f;
	output->Double	= (double) f;
}

void convertFromDouble(tOutput* output, const std::string& s)
{
	(void) output;
	(void) s;
}

void printPseudoLiteral(const std::string& s)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << s << 'f' << std::endl;
	std::cout << "double: " << s << std::endl;
}

void printOutput(const tOutput o)
{
	std::cout << "char: ";
	if (o.Double > 32 && o.Double < 127)
		std::cout << o.Char << std::endl;
	else if (o.Double < 0)
		std::cout << "Impossible" << std::endl;
	else
		std::cout << "Non Displayable" << std::endl;
	if (o.Double >= -std::numeric_limits<int>::max() && o.Double < std::numeric_limits<int>::max())
		std::cout << "int: " << o.Int << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << o.Float;
	if (o.Float - o.Int == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout << "double: " << o.Double;
	if (o.Double - o.Int == 0)
		std::cout << ".0";
	std::cout << std::endl;
}

void (*selectConverter(const std::string& s))(tOutput*, const std::string&)
{
	std::string::const_iterator it = s.begin();
	while (isdigit(*it))
		it++;
	if (*it == '.')
	{
		it++;
		while (isdigit(*it))
			it++;
		if (*it == 'f')
			return (convertFromFloat);
		else if (it == s.end())
			return (convertFromDouble);
	}
	else if (it == s.begin())
	{
		if (s == "nan" || s == "+inf" || s == "-inf")
			return (convertFromDouble);
		if (s == "nanf" || s == "+inff" || s == "-inff")
			return (convertFromFloat);
	}
	else if (it == s.end())
		return(convertFromInt);
	return NULL;
}

void ScalarConverter::convert(const std::string &s)
{
	tOutput output;
	void (*converter)(tOutput*, const std::string&);

	converter = selectConverter(s);
	converter(&output, s);
	printOutput(output);
}
