/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 20:32:56 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/18 17:47:01 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(size_t size): _maxSize(size)
{
	_size = 0;
}

Span::~Span()
{
}

long Span::shortestSpan()
{
	long span = 1;
	std::sort(_numbers.begin(), _numbers.end());
	std::vector<int>::iterator compare = _numbers.begin();
	for (std::vector<int>::iterator i = _numbers.begin() + 1; i != _numbers.end(); i++)
	{
		if (compare == _numbers.begin())
			span = *i - *compare;
		else if (*i - *compare < span)
			span = *i - *compare;
		compare++;
	}
	return span;
}

long  Span::longestSpan()
{
	std::sort(_numbers.begin(), _numbers.end());
	return (*(_numbers.end() - 1) - *(_numbers.begin()));
}

void Span::addNumber(int n)
{
	if (_size >= _maxSize)
		throw (Span::SpanSizeException());
	_size ++;
	_numbers.push_back(n);
}

void Span::addRange(int n1, int n2)
{
	if (_maxSize - _size <= (size_t) n2 - n1)
		throw (Span::SpanRangeException());
	for (int i = n1; i <= n2; i++)
		addNumber(i);
}

void Span::print()
{
	std::vector<int>::iterator it = _numbers.begin();
	std::cout << *it;
	while (++it != _numbers.end())
		std::cout << ", " << *it;
	std::cout << std::endl;
}

const char* Span::SpanRangeException::what() const throw()
{
	return ("Cannot add range to span for it would exceed max range");
}

const char* Span::SpanSizeException::what() const throw()
{
	return ("Cannot add number to span: max size reached");
}
