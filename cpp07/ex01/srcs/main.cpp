/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 22:57:38 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/13 21:31:55 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void f(int& i)
{
	i++;
}

int main(void)
{
	int a[] = {1, 2, 3, 4, 5};
	::iter(a, 5, f);
	::iter(a, 5, print<int>);
	std::cout << std::endl;
	char b[] = {'a', 'c', 'a', 'b'};
	::iter(b, 4, print<char>);
	std::cout << std::endl;
}
