/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 22:12:06 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/23 17:01:16 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <ClapTrap.hpp>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const ScavTrap &other);
		ScavTrap(const std::string &n);
		ScavTrap(const std::string &n, int h, int e, int a);
		ScavTrap &operator=(const ScavTrap &other);
		~ScavTrap();
		void attack(const std::string &target);
		void guardGate();
};

#endif
