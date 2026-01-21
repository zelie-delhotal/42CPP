/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:00:02 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/21 20:00:44 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

Weapon::Weapon(std::string t)
{
	type = t;
}

Weapon::~Weapon()
{
}

std::string	Weapon::getType()
{
	return this->type;
}

void Weapon::setType(std::string t)
{
	type = t;
}
