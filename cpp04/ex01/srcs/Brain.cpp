/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 12:48:46 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/23 17:25:02 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i=0; i<100; i++)
	{
		_ideas[i] = "...";
	}
}

Brain::Brain(const std::string &s)
{
	std::cout << "Brain parametric constructor called" << std::endl;
	for (int i=0; i<100; i++)
	{
		_ideas[i] = std::string(s);
	}
}

Brain::Brain(const Brain &other)
{
	for (int i=0; i<100; i++)
	{
		_ideas[i] = other._ideas[i];
	}
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i=0; i<100; i++)
		{
			this->_ideas[i] = other._ideas[i];
		}
	}
	std::cout << "Brain assignment operator called" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

const std::string& Brain::getIdea(const int i)
{
	return this->_ideas[i];
}

void Brain::setIdea(const std::string& idea, const int i)
{
	this->_ideas[i] = idea;
}
