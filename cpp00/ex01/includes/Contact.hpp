/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:17:32 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/20 21:35:38 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <string>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	darkestSecret;
		std::string	phoneNumber;

		std::string ft_truncate(std::string str, size_t len);

	public:
		Contact();
		~Contact();
		bool	isValid();
		void	print(int id);
		void	printDetails();
		void	setFirst(std::string firstName);
		void	setLast(std::string lastName);
		void	setNick(std::string nickname);
		void	setSecret(std::string darkestSecret);
		void	setPhone(std::string phoneNumber);
};

#endif
