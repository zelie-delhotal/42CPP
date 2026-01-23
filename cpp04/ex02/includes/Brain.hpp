/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 12:42:05 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/23 17:23:21 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain(const std::string &s);
		Brain(const Brain &other);
		Brain& operator=(const Brain &other);
		~Brain();
		const std::string& getIdea(const int i);
		void setIdea(const std::string& idea, const int i);
};

#endif
