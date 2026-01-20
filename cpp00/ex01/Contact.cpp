/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:23:11 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/20 15:33:50 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>
#include <iostream>
#include <iomanip>

Contact::Contact()
{
	this->firstName = "123456789a";
}

Contact::~Contact()
{
}

std::string Contact::ft_truncate(std::string str, size_t len)
{
	return str.length()<=len?str:str.substr(0, len - 1) + ".";
}

void	Contact::print(int id)
{
	std::cout << "|"
		<< std::setw(10) << id << "|"
		<< std::setw(10) << ft_truncate(this->firstName, 10) << "|"
		<< std::setw(10) << ft_truncate(this->lastName, 10) << "|"
		<< std::setw(10) << ft_truncate(this->nickname, 10) << "|"
		<< std::endl;
}
