/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:33:01 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/21 12:03:17 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, float> BitcoinExchange::parseDatabase(std::string filename)
{
}

void BitcoinExchange::checkDate(std::string s)
{
}

void BitcoinExchange::computeLine(std::string line, std::map<std::string, float> data)
{
}


const char* BitcoinExchange::BadDateException::what() const throw()
{
	return ("Error: Could'nt parse date to Year-Month-Day format");
}

const char* BitcoinExchange::NegativeValueException::what() const throw()
{
	return ("Error: Not a positive number");
}

const char* BitcoinExchange::TooLargeValueException::what() const throw()
{
	return ("Error: Too large a number");
}

const char* BitcoinExchange::TooEarlyException::what() const throw()
{
	return ("Error: Date is too early for BTC");
}
