/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 03:39:50 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/23 03:43:52 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>
#include <iostream>

Dog::Dog(): Animal(Dog)
{
	std::cout << "Dog default constructor called" << std::endline;
}
