/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 21:56:47 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/27 04:01:24 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <Bureaucrat.hpp>

# include <cstring>
# include <iostream>

class Form
{
	private:
		const std::string _name;
		bool _isSigned;
		const int _signGrade;
		const int _execGrade;

	public:
		Form();
		Form(const std::string& name);
		Form(const int grade);
		Form(const int signGrade, const int execGrade);
		Form(const std::string& name, const int grade);
		Form(const std::string& name,const int signGrade, const int execGrade);
		Form(const Form& other);
		Form& operator=(const Form& other);
		~Form();

		const std::string& getName() const;
		int getSignGrade() const;
		int getExecGrade() const;
		void beSigned(const Bureaucrat& b);

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				//J'ai vraiment le droit de l'implementer ici?
				return ("Grade too low: Grade cannot be more than 150");
			}
	};

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too high: Grade cannot be less than 1");
			}
	};
	class CounterfeitException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return("Counterfeit: Cannot use operator = on forms");
			}
	};
};

std::ostream& operator<<(std::ostream &out, const Form& f);

#endif
