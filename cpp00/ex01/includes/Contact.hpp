/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:17:32 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/20 14:00:34 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

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
		void	print(int id);
		void	printDetails();
		void	setFirst();
		void	setLast();
		void	setNick();
		void	setSecret();
		void	setPhone();
};
