/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 19:08:14 by gdelhota          #+#    #+#             */
/*   Updated: 2026/06/28 02:19:52 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_HPP
# define PRESIDENTIAL_PARDON_HPP

# include <AForm.hpp>
# include <cstring>

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;
		PresidentialPardonForm();
		PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
		PresidentialPardonForm(const PresidentialPardonForm& other);

	public:
		PresidentialPardonForm(const std::string& target);
		~PresidentialPardonForm();
		void execute(Bureaucrat const& executor) const;
		
};

#endif
