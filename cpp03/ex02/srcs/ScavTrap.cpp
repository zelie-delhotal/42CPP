/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 22:24:10 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/23 17:01:37 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap() : ClapTrap("Unreadable serial number", 100, 50, 20)
{
	std::cout << "ScavTrap default constructor called!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap parametrized constructor called (name)" << std::endl;
}

ScavTrap::ScavTrap(const std::string &n, int h, int e, int a) : ClapTrap(n, h, e, a)
{
	std::cout << "Scavtrap parametrized constructor called (full)" << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "Scavtrap copy constructor called!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "Scavtrap assignement operator called!" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hp = other._hp;
		this->_attack = other._attack;
		this->_energy = other._energy;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_hp <= 0)
	{
		std::cout << "Scavtrap " << this->_name << " does not have enough health to attack!" << std::endl;
		return;
	}
	if (this->_energy <= 0)
	{
		std::cout << "Scavtrap " << this->_name << " does not have enough energy to attack!" << std::endl;
		return;
	}
	this->_energy--;
	std::cout << "Scavtrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " damage" << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->_hp <= 0)
		std::cout << "Dead robots guard no gates!" << std::endl;
	else if (this->_energy <= 0)
		std::cout << "Scavtrap " << this->_name << " is too tired to guard anything!" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
