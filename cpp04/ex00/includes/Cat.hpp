/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 03:36:17 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/23 12:24:16 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <Animal.hpp>
# include <string>

class Cat : public Animal
{
	public:
		Cat();
		Cat(const std::string &t);
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		void makeSound() const;
		~Cat();
};

#endif
