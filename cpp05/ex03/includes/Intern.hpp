/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 02:47:03 by gdelhota          #+#    #+#             */
/*   Updated: 2026/06/28 03:00:39 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern& other);

		Intern& operator=(const Intern& other);
		Aform* makeForm(std::string formType, std::string target);
};

#endif
