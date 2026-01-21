/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:49:32 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/21 14:26:28 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie	*zombieHorde(int N, std::string name)
{
	int		i = 0;
	Zombie	*z = new Zombie[N];
	while(i < N)
		z[i++].setName(name);
	return (z);
}
