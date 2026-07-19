/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 20:11:09 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/18 17:58:45 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <vector>
#include <iostream>

class Span {
	private:
		size_t				_maxSize;
		size_t				_size;
		std::vector<int>	_numbers;
		Span();
		class SpanSizeException : public std::exception {
			virtual const char* what() const throw();
		};
		class SpanRangeException : public std::exception {
			virtual const char* what() const throw();
		};
	public:
		~Span();
		Span(size_t size);
		void addNumber(int n);
		void addRange(int n1, int n2);
		long shortestSpan();
		long longestSpan();
		void print();

		template<typename T>
		void addRange(T start, T end)
		{
			size_t rangeSize = 0;
			for (T counter = start; counter!=end; counter++)
				rangeSize++;
			if (_maxSize - _size < rangeSize)
				throw(Span::SpanRangeException());
			_numbers.insert(_numbers.end(), start, end);
		}
};

#endif
