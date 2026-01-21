/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:04:03 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/21 14:29:23 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.h>

int	main(void)
{
	Zombie	*z;

	z = zombieHorde(5, "Bob");
	z[2].setName("Joe");
	for (int i = 0; i < 5; i++)
		z[i].announce();
	delete[] z;
}
