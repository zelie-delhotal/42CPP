/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:32:05 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/21 12:05:42 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <map>

class BitcoinExchange
{
	private:
		BitcoinExchange();
		~BitcoinExchange();
	public:
		static std::map<std::string, float> parseDatabase(std::string filename);

		static void	checkDate(std::string s);
		static void	computeLine(std::string line, std::map<std::string, float> data);
		
		class BadDateException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		class NegativeValueException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		class TooLargeValueException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		class TooEarlyException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

#endif
