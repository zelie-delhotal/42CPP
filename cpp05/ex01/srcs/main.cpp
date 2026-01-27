/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 00:38:42 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/27 02:28:39 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <iostream>

int main(void)
{
	Bureaucrat b1;
	Bureaucrat b2(10);
	Bureaucrat b3("Bob");
	Bureaucrat b4("Alice", 1);

	std::cout << "Constructor tests :" << std::endl;
	std::cout << "Default Unnamed 150: " << b1 << std::endl;
	std::cout << "Parametrized Unnamed 10: " << b2 << std::endl;
	std::cout << "Parametrized Bob 150: " << b3 << std::endl;
	std::cout << "Parametrized Alice 1: " << b4 << std::endl;

	std::cout << "\nExceptions on constructors:" << std::endl;
	try
	{
		Bureaucrat b5(0);
		std::cout << b5;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b5("test", -1);
		std::cout << b5;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b5(151);
		std::cout << b5;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b5("test", 1000);
		std::cout << b5;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nGetters:" << std::endl;
	std::cout << b4.getName() << ", Bureaucrat grade " << b4.getGrade() << std::endl;

	std::cout << "\nIncrement test:" << std::endl;
	std::cout << b2 << std::endl;
	b2.incrementGrade();
	std::cout << "Incremented: " << b2 << std::endl;
	std::cout << "Should throw GradeTooHigh:" << std::endl;
	std::cout << b4 << std::endl;
	try
	{
		b4.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << b4 << std::endl;

	std::cout << "\nDecrement test:" << std::endl;
	std::cout << b2 << std::endl;
	b2.decrementGrade();
	std::cout << "Decremented: " << b2 << std::endl;
	std::cout << "Should throw GradeTooLow:" << std::endl;
	std::cout << b3 << std::endl;
	try
	{
		b3.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << b3 << std::endl;
}
