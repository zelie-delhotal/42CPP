/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 03:21:30 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/23 12:04:35 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>
#include <iostream>

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Dog k;
	Cat l;
	const WrongAnimal *a = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k.getType() << " " << std::endl;
	std::cout << l.getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	k.makeSound();
	l.makeSound();
	meta->makeSound();
	a->makeSound();
	delete meta;
	delete j;
	delete i;
	delete a;
	return 0;
}
