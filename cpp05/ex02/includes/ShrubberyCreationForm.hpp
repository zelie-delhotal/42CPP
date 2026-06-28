/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:40:31 by gdelhota          #+#    #+#             */
/*   Updated: 2026/03/09 18:42:52 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP

# include <AForm.hpp>
# include <cstring>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
		ShrubberyCreationForm();
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);

	public:
		ShrubberyCreationForm(const std::string& target);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const& executor) const;
		
};

#endif
