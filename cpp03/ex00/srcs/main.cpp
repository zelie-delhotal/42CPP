/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 19:38:49 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/22 20:01:14 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int main  (void)
{
	ClapTrap c1;
	{
		ClapTrap c2("Bob");
		c2.takeDamage(5);
		c2.attack("fr*nch people");
		c1 = c2;
	}
	c1.attack("some target");
	c1.beRepaired(1);
	c1.attack("some target");
	c1.attack("some target");
	c1.attack("some target");
	c1.attack("some target");
	c1.attack("some target");
	c1.attack("some target");
	c1.attack("its last target");
	c1.attack("another target");
	c1.beRepaired(1);
	c1.takeDamage(6);
	c1.attack("yet another target");
	c1.beRepaired(1);
}
