/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 19:38:49 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/22 23:32:50 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>

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
	ScavTrap s1;
	s1.attack("ennemies");
	s1.guardGate();
	s1.takeDamage(99);
	s1.beRepaired(5);
	for (int i=0; i<50; i++)
		s1.attack("someone");
	s1.beRepaired(100);
	s1.takeDamage(8);
	s1.takeDamage(0);
	ScavTrap s2(s1);
	s2.takeDamage(5);
	s1.guardGate();
}
