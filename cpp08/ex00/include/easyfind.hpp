/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 17:08:59 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/15 14:14:54 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
int easyfind(T container, int n){
	typename T::iterator it = std::find(container.begin(), container.end(), n);
	if (it != container.end())
		return *it;
	throw (std::runtime_error("Value not found"));
}

#endif
