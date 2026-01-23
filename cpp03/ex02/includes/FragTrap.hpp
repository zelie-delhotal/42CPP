/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 22:12:06 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/23 17:01:05 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <ClapTrap.hpp>

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap &other);
		FragTrap(const std::string &n);
		FragTrap(const std::string &n, int h, int e, int a);
		FragTrap &operator=(const FragTrap &other);
		~FragTrap();
		void attack(const std::string &target);
		void highFivesGuys();
};

#endif
