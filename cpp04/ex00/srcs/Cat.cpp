/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 03:39:50 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/23 12:35:51 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>
#include <iostream>

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const std::string &type)
{
	this->_type = type;
	std::cout << "Doc parametric constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << _type << ": ";
	std::cout << "Meow" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}
