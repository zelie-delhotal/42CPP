/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 23:11:15 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/10 01:04:41 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <cstdlib>

int main(int ac, char **av)
{
	int a, b;
	Data d;
	Data* dataPointer;
	uintptr_t p;
	if (ac < 2)
	{
		std::cout << "Please provide two ints as parameters for the tests" << std::endl;
		return 1;
	}
	a = std::atoi(av[1]);
	b = std::atoi(av[2]);
	d.a = a;
	d.b = b;
	dataPointer = &d;
	std::cout << (*dataPointer).a << std::endl;
	std::cout << (*dataPointer).b << std::endl;
	p = Serializer::serialize(dataPointer);
	std::cout << p << std::endl;
	dataPointer = Serializer::deserialize(p);
	std::cout << (*dataPointer).a << std::endl;
	std::cout << (*dataPointer).b << std::endl;
}
