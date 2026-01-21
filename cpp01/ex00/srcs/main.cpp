/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:04:03 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/21 14:04:45 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.h>

int	main(void)
{
	Zombie	*z;

	randomChump("Joe");
	z = newZombie("Bob");
	z->announce();
	randomChump("John");
	delete z;
}
