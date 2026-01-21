/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:18:43 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/21 14:06:31 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H

# define ZOMBIE_H
# include <Zombie.hpp>
# include <iostream>
# include <string>

Zombie	*newZombie(std::string Name);
void	randomChump(std::string Name);

#endif
