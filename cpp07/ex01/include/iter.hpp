/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 23:00:08 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/13 21:30:21 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T, typename Function>
void iter(T* array, const int size, Function f)
{
	for (int i=0; i<size; i++)
	{
		f(*array);
		array++;
	}
}

//test function only
template<typename T>
void print(const T& element)
{
	std::cout << element;
}

#endif
