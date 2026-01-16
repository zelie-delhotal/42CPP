/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 18:18:49 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/16 17:09:59 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int	i, j;

	i = 1;
	while(i < ac)
	{
		if (i > 1)
			std::cout << " ";
		j = 0;
		while(av[i][j])
			std::cout << (char) std::toupper(av[i][j++]);
		i++;
	}
	std::cout << std::endl;
}
