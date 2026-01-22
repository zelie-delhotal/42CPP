/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 22:24:10 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/22 23:42:50 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap() : ClapTrap("Unnamed", 100, 50, 20)
{
	std::cout << "FragTrap default constructor called!" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name, 100, 50, 20)
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

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "Fragtrap " << this->_name << " took " << amount << " damage!" << std::endl;
	if (this->_hp <= 0)
	{
		std::cout << "Fortunately it does not do much. Unfortunately it was already dead before." << std::endl;
		return;
	}
	this->_hp -= amount;
	if (this->_hp > 0)
		std::cout << "It has " << this->_hp << " health left." << std::endl;
	else
		std::cout << this->_name << " dies on the spot!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->_hp <= 0)
	{
		std::cout << "Fragtrap " << this->_name << " is dead and cannot repair!" << std::endl;
		return;
	}
	if (this->_energy <= 0)
	{
		std::cout << "Fragtrap " << this->_name << " does not have enough energy to repair!" << std::endl;
		return;
	}
	this->_energy--;
	this->_hp += amount;
	std::cout << "Fragtrap " << this->_name << " repairs itself for " << amount << " health points" << std::endl;
	std::cout << "It now has " << this->_hp << " health" << std::endl;
}

void FragTrap::highFivesGuys()
{
	if (this->_hp <= 0)
		std::cout << "You hear a feint noise, as if Fragtrap " << this->_name << " was asking for one last high five before going down..." << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " high fives everyone for moral support!" << std::endl;
}
