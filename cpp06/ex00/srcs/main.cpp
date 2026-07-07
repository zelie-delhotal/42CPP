/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 19:43:24 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/07 02:18:54 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Error: needs an argument" << std::endl;
		return 1;
	}
	ScalarConverter::convert(av[1]);
}
