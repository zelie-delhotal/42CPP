/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 21:25:05 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/10 22:55:04 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<typename T>
T min(T a, T b)
{
	if (a < b)
		return a;
	return b;
}

template<typename T>
T max(T a, T b)
{
	if (a > b)
		return a;
	return b;
}
#endif
