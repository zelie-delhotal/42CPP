/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 03:07:52 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/23 15:45:11 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <Animal.hpp>
# include <Brain.hpp>
# include <string>

class Dog : public Animal
{
	private:
		Brain* _brain;
	public:
		Dog();
		Dog(const std::string &t);
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		void makeSound() const;
		~Dog();
};

#endif
