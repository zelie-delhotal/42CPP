/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:14:05 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/20 21:42:31 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <Contact.hpp>
#include <Phonebook.hpp>

int main(void)
{
	std::string		input;
	Phonebook		test;

	while (std::getline(std::cin, input))
	{
		if (input == "ADD")
			test.add();

		if (input == "SEARCH")
			test.search();

		if (input == "EXIT")
			return (0);
	}
	std::cout << "Input closed, exiting..." << std::endl;
	return (1);
}
