/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:11:57 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/22 01:11:14 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <Weapon.hpp>
# include <iostream>
class HumanB
{
	private:
		Weapon		*weapon;
		std::string	name;
	public:
		HumanB(std::string n);
		~HumanB();
		void setWeapon(Weapon &w);
		void attack();
};

#endif
