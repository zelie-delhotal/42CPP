/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:14:05 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/19 10:34:30 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string	input;

	while (std::getline(std::cin, input))
	{
		if (input == "ADD")
			continue;

		if (input == "SEARCH")
			continue;

		if (input == "EXIT")
			return (0);

		std::cout << "Unknown Command, please type ADD, SEARCH or EXIT" << std::endl;
	}
	std::cout << "Input closed, exiting..." << std::endl;
	return (1);
}
