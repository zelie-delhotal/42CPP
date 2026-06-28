/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 21:56:47 by gdelhota          #+#    #+#             */
/*   Updated: 2026/06/25 15:50:02 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <Bureaucrat.hpp>

# include <cstring>
# include <iostream>

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _isSigned;
		const int _signGrade;
		const int _execGrade;

	public:
		AForm();
		AForm(const std::string& name);
		AForm(const int grade);
		AForm(const int signGrade, const int execGrade);
		AForm(const std::string& name, const int grade);
		AForm(const std::string& name,const int signGrade, const int execGrade);
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		virtual ~AForm();

		const std::string& getName() const;
		bool isSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;
		void beSigned(const Bureaucrat& b);
		virtual void execute(Bureaucrat const& executor) const = 0;

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class UnsignedException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class CounterfeitException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream &out, const AForm& f);

#endif
