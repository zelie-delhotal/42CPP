/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 22:24:10 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/23 17:00:30 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap() : ClapTrap("Unnamed", 100, 100, 30)
{
	std::cout << "FragTrap default constructor called!" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap parametrized constructor called (name)" << std::endl;
}

FragTrap::FragTrap(const std::string &n, int h, int e, int a) : ClapTrap(n, h, e, a)
{
	std::cout << "Fragtrap parametrized constructor called (full)" << std::endl;
}


FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "Fragtrap copy constructor called!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "Fragtrap assignement operator called!" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hp = other._hp;
		this->_attack = other._attack;
		this->_energy = other._energy;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->_hp <= 0)
	{
		std::cout << "Fragtrap " << this->_name << " does not have enough health to attack!" << std::endl;
		return;
	}
	if (this->_energy <= 0)
	{
		std::cout << "Fragtrap " << this->_name << " does not have enough energy to attack!" << std::endl;
		return;
	}
	this->_energy--;
	std::cout << "Fragtrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " damage" << std::endl;
}

void FragTrap::highFivesGuys()
{
	if (this->_hp <= 0)
		std::cout << "You hear a feint noise, as if Fragtrap " << this->_name << " was asking for one last high five before going down forever..." << std::endl;
	else if (this->_energy <= 0)
		std::cout << "Fragtrap " << this->_name << " wants high fives, but it does not have enough energy to move its robotic arms..." << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " high fives everyone for moral support!" << std::endl;
}
