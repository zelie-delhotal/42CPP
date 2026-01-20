/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:23:40 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/20 23:14:39 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Phonebook.hpp>

Phonebook::Phonebook()
{
	this->oldestId = 0;
	this->count = 0;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::add()
{
	std::string	input;
	Contact		c;

	std::cout << "First Name:" << std::endl;
	if (!std::getline(std::cin, input))
		return ;
	c.setFirst(input);
	std::cout << "Last Name:" << std::endl;
	if (!std::getline(std::cin, input))
		return ;
	c.setLast(input);
	std::cout << "Nickname:" << std::endl;
	if (!std::getline(std::cin, input))
		return ;
	c.setNick(input);
	std::cout << "Darkest Secret:" << std::endl;
	if (!std::getline(std::cin, input))
		return ;
	c.setSecret(input);
	std::cout << "Phone Number:" << std::endl;
	if (!std::getline(std::cin, input))
		return ;
	c.setPhone(input);
	if (!c.isValid())
	{
		std::cout << "Error: New Contact may not have empty fields" << std::endl;
		return;
	}
	this->list[this->oldestId] = c;
	this->oldestId = (this->oldestId + 1) % 8;
	if (this->count < 8)
		this->count++;
	std::cout << "Contact added succesfully" << std::endl;
}

void	Phonebook::search()
{
	int	i;
	int	input;

	std::cout << std::setfill('-') << std::setw(45) << "\n";
	std::cout << "|" << std::setfill(' ') << std::setw(10) << "ID"
		<< "|" << std::setw(10) << "First Name"
		<< "|" << std::setw(10) << "Last Name"
		<< "|" << std::setw(10) << "Nickname"
		<< "|" << std::endl;
	std::cout << std::setfill('-') << std::setw(45) << "\n";
	i = 0;
	while(i < count)
	{
		this->list[i].print(i + 1);
		i++;
	}
	std::cout << std::setfill('-') << std::setw(45) << "\n";
	std::cout << "Enter ID of the contact you wish to see:\n";
	std::cin >> input;
	if (std::cin.fail())
	{
		std::cout << "Could not parse ID to int, going back to main menu" << std::endl;
		std::cin.clear();
		std::cin.ignore();
		return ;
	}
	input--;
	if (input < 0 || input >= this->count)
	{
		std::cout << "Invalid ID, back to main Menu" << std::endl;
		return;
	}
	this->list[input].printDetails();
}
