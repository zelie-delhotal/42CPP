/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 03:21:30 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/23 18:42:06 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AAnimal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>
#include <Brain.hpp>
#include <iostream>

int main()
{
	{
		Brain a;
		Brain b("sauter du bifrost...");
		Brain c(b);
		Brain d = a;
		std::cout << "brain a: " << a.getIdea(0) << std::endl;
		a.setIdea("youpiii", 0);
		std::cout << "brain a: " << a.getIdea(0) << std::endl;
		std::cout << "brain b: " << b.getIdea(20) << std::endl;
		b.setIdea("youpiii", 0);
		std::cout << "brain c: " << c.getIdea(0) << std::endl;
		std::cout << "brain d: " << d.getIdea(0) << std::endl;
		std::cout << "\n\n" << std::endl;
	}
	//AAnimal test;
	const AAnimal* j = new Dog();
	delete j;
	Dog* abc = new Dog();
	delete abc;
	std::cout << "AAnimal array:" << std::endl;
	AAnimal *array[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		array[i]->makeSound();
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		delete array[i];
}
