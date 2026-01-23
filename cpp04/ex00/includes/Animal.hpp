/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 02:42:37 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/23 03:20:41 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const std::string &t);
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		~Animal();
		std::string &getType();
		void makeSound();
};

#endif
