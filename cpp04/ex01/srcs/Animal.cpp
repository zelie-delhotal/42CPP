/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 02:21:12 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/23 12:23:21 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Animal.hpp>
# include <iostream>
# include <string>

Animal::Animal() : _type("formless being")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string &t) : _type(t)
{
	std::cout << "Animal Parametric constructor called" << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

const std::string& Animal::getType() const
{
	return this->_type;
}

void Animal::makeSound() const
{
	std::cout << _type << ": ";
	std::cout << "**Despicable otherworldy noises**" << std::endl;
}
