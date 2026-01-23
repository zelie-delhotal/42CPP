/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 03:07:52 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/23 17:45:04 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <Animal.hpp>
# include <Brain.hpp>
# include <string>

class Cat : public Animal
{
	private:
		Brain* _brain;
	public:
		Cat();
		Cat(const std::string &t);
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		void makeSound() const;
		~Cat();
};

#endif
