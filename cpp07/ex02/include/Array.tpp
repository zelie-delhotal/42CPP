/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 13:54:54 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/14 16:19:40 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	_size = 0;
	_array = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_size = n;
	_array = new T[n]();
}

template <typename T>
Array<T>::~Array()
{
	delete[](_array);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return(_size);
}

template <typename T>
Array<T>::Array(const Array& other)
{
	_size = other.size();
	_array = new T[_size];
	for (unsigned int i=0; i<_size; i++)
		_array[i] = other[i];
}

template <typename T>
Array<T> Array<T>::operator=(const Array& other)
{
	_size = other.size();
	_array = new T[_size];
	for (int unsigned i=0; i<_size; i++)
		_array[i] = other[i];
	return *this;
}

template <typename T>
T& Array<T>::operator[](const unsigned int n) const
{
	if (n >= _size)
		throw (std::out_of_range("Error: accessing index beyond Array size"));
	return (_array[n]);
}
