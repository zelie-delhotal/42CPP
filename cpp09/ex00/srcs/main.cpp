/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:33:17 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/21 13:30:16 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int ac, char** av)
{
	if (ac < 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return 1;
	}
	try
	{
		std::string line;
		std::map<std::string, float> data = BitcoinExchange::parseDatabase("data.csv");
		while(getline(av[1])) //FIXME no clue how this works check later
			BitcoinExchange::computeLine();
	}
	catch (exception& e)
	{
		std::cout << e.what() << std::endl;
		return 1;
	}
	return 0;
}
