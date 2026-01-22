/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:30:10 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/22 01:11:28 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

HumanB::HumanB(std::string n)
{
	name = n;
	weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &w)
{
	weapon = &w;
}

void HumanB::attack()
{
	if (weapon == NULL)
		std::cout << this->name << " attacks with their bare hands" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
