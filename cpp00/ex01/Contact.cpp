/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:23:11 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/20 21:39:46 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>
#include <iostream>
#include <iomanip>

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::ft_truncate(std::string str, size_t len)
{
	return str.length()<=len?str:str.substr(0, len - 1) + ".";
}

bool	Contact::isValid()
{
	return (this->firstName != ""
			&& this->lastName != ""
			&& this->nickname != ""
			&& this->darkestSecret != ""
			&& this->phoneNumber != "");
}

void	Contact::print(int id)
{
	std::cout << "|"
		<< std::setfill(' ') << std::setw(10) << id << "|"
		<< std::setw(10) << ft_truncate(this->firstName, 10) << "|"
		<< std::setw(10) << ft_truncate(this->lastName, 10) << "|"
		<< std::setw(10) << ft_truncate(this->nickname, 10) << "|"
		<< std::endl;
}

void	Contact::printDetails()
{
	std::cout << "First Name: " << this->firstName << "\n"
		<< "Last Name: " << this->lastName << "\n"
		<< "Nickname: " << this->nickname << "\n"
		<< "Darkest Secret: " << this->darkestSecret << "\n"
		<< "Phone Number: " << this->phoneNumber << std::endl;
}

void	Contact::setFirst(std::string first)
{
	firstName = first;
}

void	Contact::setLast(std::string last)
{
	lastName = last;
}

void	Contact::setNick(std::string nick)
{
	nickname = nick;
}

void	Contact::setSecret(std::string secret)
{
	darkestSecret = secret;
}

void	Contact::setPhone(std::string number)
{
	phoneNumber = number;
}
