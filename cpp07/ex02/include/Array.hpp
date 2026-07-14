/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 13:38:35 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/14 15:35:24 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T> class Array {
	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array operator=(const Array& other);
		T& operator[](const unsigned int n) const;
		unsigned int size() const;
		void print();
	private:
		T*				_array;
		unsigned int	_size;
};

#endif
