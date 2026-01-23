/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 03:07:52 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/23 18:33:59 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <AAnimal.hpp>
# include <Brain.hpp>
# include <string>

class Dog : public AAnimal
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
