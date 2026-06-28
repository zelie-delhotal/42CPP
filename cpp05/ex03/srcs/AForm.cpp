/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 02:56:35 by gdelhota          #+#    #+#             */
/*   Updated: 2026/06/25 15:57:59 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>

AForm::AForm() : _name("Unnamed Form"), _isSigned(false), _signGrade(150), _execGrade(150)
{
}

AForm::AForm(const std::string& name) : _name(name), _isSigned(false), _signGrade(150), _execGrade(150)
{
}

AForm::AForm(const int g) : _name("Unnamed Form"), _isSigned(false), _signGrade(g), _execGrade(g)
{
	if (g <= 0)
		throw AForm::GradeTooHighException();
	if (g > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const int sign, const int exec) : _name("Unnamed Form"), _isSigned(false), _signGrade(sign), _execGrade(exec)
{
	if (sign <= 0 || exec <= 0)
		throw AForm::GradeTooHighException();
	if (sign > 150 || exec > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const std::string& name, const int g) : _name(name), _isSigned(false), _signGrade(g), _execGrade(g)
{
	if (g <= 0)
		throw AForm::GradeTooHighException();
	if (g > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const std::string& name,const int sign, const int exec) : _name(name), _isSigned(false), _signGrade(sign), _execGrade(exec)
{
	if (sign <= 0 || exec <= 0)
		throw AForm::GradeTooHighException();
	if (sign > 150 || exec > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& o) : _name(o._name), _isSigned(false), _signGrade(o._signGrade), _execGrade(o._execGrade)
{
}

AForm& AForm::operator=(const AForm& other)
{
	(void) other;
	throw AForm::CounterfeitException();
}

AForm::~AForm()
{
}

const std::string& AForm::getName() const
{
	return this->_name;
}

int AForm::getSignGrade() const
{
	return this->_signGrade;
}

int AForm::getExecGrade() const
{
	return this->_execGrade;
}

bool AForm::isSigned() const
{
	return this->_isSigned;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char* AForm::UnsignedException::what() const throw()
{
	return ("Form must be signed first to be executed");
}

const char* AForm::CounterfeitException::what() const throw()
{
	return("Counterfeit: Cannot use operator = on forms");
}

void AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->_signGrade)
		throw AForm::GradeTooLowException();
	this->_isSigned = true;
}

std::ostream& operator<<(std::ostream &out, const AForm& f)
{
	out << "Form " << f.getName()
		<< ": sign grade " << f.getSignGrade()
		<< ", execution grade " << f.getExecGrade()
		<< ", signed: " << (f.isSigned()?"yes":"no");
	return out;
}
