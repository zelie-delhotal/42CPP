/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 02:46:46 by gdelhota          #+#    #+#             */
/*   Updated: 2026/06/29 01:57:50 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern& other)
{
	(void) other;
}

AForm* makeShrubbery(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

AForm* makePardon(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

AForm* makeRobotomy(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

AForm* Intern::makeForm(std::string formType, std::string target)
{
	const std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm* (*func[3])(const std::string&) = {makeShrubbery, makeRobotomy, makePardon};
	AForm* ret;
	for (int i = 0; i < 3; i++)
	{
		if (formType == forms[i])
		{
			ret = func[i](target);
			std::cout << "Intern creates " << ret->getName() << std::endl;
			return (ret);
		}
	}
	std::cout << "Intern couldn't create " << formType << ": form not found" << std::endl;
	return NULL;
}
