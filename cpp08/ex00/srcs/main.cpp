/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 17:07:54 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/15 14:19:58 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>

int main(void)
{
	std::vector<int> a;
	for (int i=0; i<10; i+=2)
		a.push_back(i);
	std::cout << ::easyfind(a, 4) << std::endl;
	std::deque<int> b;
	for (int i=0; i<10; i+=2)
		b.push_back(i);
	std::cout << ::easyfind(b, 4) << std::endl;
}
