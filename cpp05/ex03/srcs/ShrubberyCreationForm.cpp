/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 16:06:20 by gdelhota          #+#    #+#             */
/*   Updated: 2026/06/25 16:21:36 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("Shrubbery Creation Form", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	std::fstream fs;
	if (!this->isSigned())
		throw AForm::UnsignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();
	try
	{
		fs.open(this->_target.c_str(), std::fstream::out); 
		fs << " _--__-__\n";
		fs << "(        )\n";
		fs << "(   \\V/   )\n";
		fs << " \\_-| |_-'  __--___\n";
		fs << "    | |    (       )\n";
		fs << "    | |   (   \\V/   )\n";
		fs << "           (_-| |-_)\n";
		fs << "              | |\n";
		fs << "              | |\n";
		fs.close();
	}
	catch (std::exception e)
	{
		std::cout << "Error writing in file: " << e.what() << std::endl;
	}
}
