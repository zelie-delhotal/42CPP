/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 16:06:20 by gdelhota          #+#    #+#             */
/*   Updated: 2026/06/28 02:30:03 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>
#include <iostream>
#include <ctime>
#include <unistd.h>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("Robotomy Creation Form", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (!this->isSigned())
		throw AForm::UnsignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();
	else
	{
		std::cout << "WHIIIIRR..." << std::endl;
		sleep(1);
		std::cout << "BRRRRRRRRR..." << std::endl;
		sleep(1);
		srand(time(NULL));
		int success = rand() % 2;
		if (success == 1)
			std::cout << _target << " has been robotomized successfully!" << std::endl;
		else
			std::cout << "The robotomy has failed. Feel free to send in another robotomy request form!" << std::endl;
	}
}
