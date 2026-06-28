/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 21:56:11 by gdelhota          #+#    #+#             */
/*   Updated: 2026/06/28 02:53:23 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat() : _name("Unnamed Bureaucrat"), _grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string& name) : _name(name), _grade(150)
{
}

Bureaucrat::Bureaucrat(const int grade) : _name("Unnamed Bureaucrat")
{
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const std::string& name, const int grade) : _name(name)
{
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	this->_grade = other.getGrade();
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
	return out;
}

const std::string& Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low: Grade cannot be more than 150");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high: Grade cannot be less than 1");
}
void Bureaucrat::incrementGrade()
{
	if (this->_grade <= 1)
		throw GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade >= 150)
		throw GradeTooLowException();
	this->_grade++;
}

void Bureaucrat::signForm(AForm& f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->_name << " signed form " << f.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << "couldn't sign form " << f.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const& form) const
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed form " << form.getName() << std::endl();
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " couldn't execute form " << form.getName() << " because " << e.what() << std::endl;
	}
}
