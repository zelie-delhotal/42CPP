/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 19:08:14 by gdelhota          #+#    #+#             */
/*   Updated: 2026/05/21 13:57:37 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
# define ROBOTOMY_HPP

# include <AForm.hpp>
# include <cstring>

class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;
		RobotomyRequestForm();
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
		RobotomyRequestForm(const RobotomyRequestForm& other);

	public:
		RobotomyRequestForm(const std::string& target);
		~RobotomyRequestForm();
		void execute(Bureaucrat const& executor) const;
		
};

#endif
