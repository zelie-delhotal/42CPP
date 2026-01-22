/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 19:00:27 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/22 23:07:37 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap() : _hp(10), _energy(10), _attack(0)
{
	std::cout << "Claptrap default constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const std::string &n) : _hp(10), _energy(10), _attack(0)
{
	this->_name = n;
	std::cout << "Claptrap parametrized constructor called (name)" << std::endl;
}

ClapTrap::ClapTrap(const std::string &n, int h, int e, int a) : _hp(h), _energy(e), _attack(a)
{
	this->_name = n;
	std::cout << "Claptrap parametrized constructor called (full)" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hp(other._hp), _energy(other._energy), _attack(other._attack)
{
	std::cout << "Claptrap copy constructor called!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Claptrap assignement operator called!" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hp = other._hp;
		this->_attack = other._attack;
		this->_energy = other._energy;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap destructor called!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hp <= 0)
	{
		std::cout << "Claptrap " << this->_name << " does not have enough health to attack!" << std::endl;
		return;
	}
	if (this->_energy <= 0)
	{
		std::cout << "Claptrap " << this->_name << " does not have enough energy to attack!" << std::endl;
		return;
	}
	this->_energy--;
	std::cout << "Claptrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Claptrap " << this->_name << " took " << amount << " damage!" << std::endl;
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

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp <= 0)
	{
		std::cout << "Claptrap " << this->_name << " is dead and cannot repair!" << std::endl;
		return;
	}
	if (this->_energy <= 0)
	{
		std::cout << "Claptrap " << this->_name << " does not have enough energy to repair!" << std::endl;
		return;
	}
	this->_energy--;
	this->_hp += amount;
	std::cout << "Claptrap " << this->_name << " repairs itself for " << amount << " health points" << std::endl;
}
