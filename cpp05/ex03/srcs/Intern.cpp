/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 02:46:46 by gdelhota          #+#    #+#             */
/*   Updated: 2026/06/28 03:51:09 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern(const Intern& other)
{
	(void) other;
}

Intern& operator=(const Intern& other)
{
	(void) other;
}

Aform* makeShrubbery(const std::string &target) const
{
	return (new ShrubberyCreationForm(target));
}

Aform* makePardon(const std::string &target) const
{
	return (new PresidentialPardonForm(target));
}

Aform* makeRobotomy(const std::string &target) const
{
	return (new RobotomyRequestForm(target));
}

Aform* Intern::makeForm(std::string formType, std::string target)
{
	const std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
}
