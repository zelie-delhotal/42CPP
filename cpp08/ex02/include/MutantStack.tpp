/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:05:15 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/19 14:28:48 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
typename MutantStack<T>::iterator&	MutantStack<T>::iterator::operator++()
{
	object++;
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::iterator::operator++(int)
{
	iterator ret = *this;
	object++;
	return ret;
}

template <typename T>
typename MutantStack<T>::iterator&	MutantStack<T>::iterator::operator--()
{
	object--;
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::iterator::operator--(int)
{
	iterator ret = *this;
	object--;
	return ret;
}

template <typename T>
bool MutantStack<T>::iterator::operator==(iterator &other)
{
	return (object == other.object);
}
