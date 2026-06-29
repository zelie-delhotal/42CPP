/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 00:38:42 by gdelhota          #+#    #+#             */
/*   Updated: 2026/06/29 02:15:00 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <AForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <iostream>

int main(void)
{
	std::cout << "Bureaucrat Tests:\n" << std::endl;

	Bureaucrat b1;
	Bureaucrat b2(10);
	Bureaucrat b3("Bob");
	Bureaucrat b4("Zaphod", 1);

	std::cout << "Constructor tests :" << std::endl;
	std::cout << "Default Unnamed 150: " << b1 << std::endl;
	std::cout << "Parametrized Unnamed 10: " << b2 << std::endl;
	std::cout << "Parametrized Bob 150: " << b3 << std::endl;
	std::cout << "Parametrized Zaphod 1: " << b4 << std::endl;

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

	ShrubberyCreationForm s1("Mojave");
	try
	{
		s1.execute(b4);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	s1.beSigned(b4);
	s1.execute(b4);
	RobotomyRequestForm r1("Marvin");
	try
	{
		r1.execute(b4);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	b4.signForm(s1);
	r1.execute(b4);
	r1.execute(b4);
	r1.execute(b4);
	r1.execute(b4);
	r1.execute(b4);
	r1.execute(b4);
	PresidentialPardonForm p1("John");
	b4.executeForm(p1);
	p1.beSigned(b4);
	b4.executeForm(p1);
}
