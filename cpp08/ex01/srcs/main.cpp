/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 20:09:54 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/18 17:48:32 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <list>

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	Span stress(20000);
	std::list<int> ls;
	for (int i=5; i<19999; i++)
	{
		ls.push_back(i);
	}
	stress.addRange(ls.begin(), ls.end());
	stress.addRange(1, 5);
	//stress.print();
	std::cout << stress.shortestSpan() << std::endl;
	std::cout << stress.longestSpan() << std::endl;
}
