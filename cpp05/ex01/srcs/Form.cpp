/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 02:56:35 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/28 17:55:16 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

Form::Form() : _name("Unnamed Form"), _isSigned(false), _signGrade(150), _execGrade(150)
{
}

Form::Form(const std::string& name) : _name(name), _isSigned(false), _signGrade(150), _execGrade(150)
{
}

Form::Form(const int g) : _name("Unnamed Form"), _isSigned(false), _signGrade(g), _execGrade(g)
{
	if (g <= 0)
		throw Form::GradeTooHighException();
	if (g > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const int sign, const int exec) : _name("Unnamed Form"), _isSigned(false), _signGrade(sign), _execGrade(exec)
{
	if (sign <= 0 || exec <= 0)
		throw Form::GradeTooHighException();
	if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const std::string& name, const int g) : _name(name), _isSigned(false), _signGrade(g), _execGrade(g)
{
	if (g <= 0)
		throw Form::GradeTooHighException();
	if (g > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const std::string& name,const int sign, const int exec) : _name(name), _isSigned(false), _signGrade(sign), _execGrade(exec)
{
	if (sign <= 0 || exec <= 0)
		throw Form::GradeTooHighException();
	if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& o) : _name(o._name), _isSigned(false), _signGrade(o._signGrade), _execGrade(o._execGrade)
{
}

Form& Form::operator=(const Form& other)
{
	(void) other;
	throw Form::CounterfeitException();
}

Form::~Form()
{
}

const std::string& Form::getName() const
{
	return this->_name;
}

int Form::getSignGrade() const
{
	return this->_signGrade;
}

int Form::getExecGrade() const
{
	return this->_execGrade;
}

bool Form::isSigned() const
{
	return this->_isSigned;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char* Form::CounterfeitException::what() const throw()
{
	return("Counterfeit: Cannot use operator = on forms");
}

void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	this->_isSigned = true;
}

std::ostream& operator<<(std::ostream &out, const Form& f)
{
	out << "Form " << f.getName()
		<< ": sign grade " << f.getSignGrade()
		<< ", execution grade " << f.getExecGrade()
		<< ", signed: " << (f.isSigned()?"yes":"no");
	return out;
}
