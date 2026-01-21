/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:53:34 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/21 13:54:55 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.h>

void randomChump(std::string name)
{
	Zombie	z;

	z.setName(name);
	z.announce();
}
