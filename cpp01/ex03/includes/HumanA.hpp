/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:11:57 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/21 20:19:26 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <Weapon.hpp>
# include <string>
class HumanA
{
	private:
		Weapon		&weapon;
		std::string	name;
	public:
		HumanA(std::string n, Weapon &w);
		~HumanA();
		void attack();
};

#endif
