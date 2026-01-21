/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:49:32 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/21 14:06:47 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie	*newZombie(std::string name)
{
	Zombie *z = new Zombie();
	z->setName(name);
	return (z);
}
