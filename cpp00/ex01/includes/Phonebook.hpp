/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:17:09 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/20 23:00:21 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <Contact.hpp>
# include <iostream>
# include <iomanip>
# include <cstring>

class	Phonebook
{
	private:
		int		oldestId;
		int		count;
		Contact list[8];

	public:
		Phonebook();
		~Phonebook();
		void	add();
		void	search();
};

#endif
