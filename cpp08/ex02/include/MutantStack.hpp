/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 18:34:35 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/19 14:28:39 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <algorithm>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		class iterator : public std::iterator<
						std::bidirectional_iterator_tag,
						T,
						size_t,
						T*,
						T&
						>
		{
			private:
				T* object;
			public:
				iterator(T& obj)
				{
					object = &obj;
				}
				iterator&	operator++();
				iterator	operator++(int);
				iterator&	operator--();
				iterator	operator--(int);
				bool		operator==(iterator &other);
				bool		operator!=(iterator &other)
				{
					return (object != other.object);
				}
				T	operator*() const
				{
					return *object;
				}
		};
		iterator begin()
		{
			iterator it = end();
			for (size_t i=0; i<this->size(); i++)
				it--;
			return (it);
		}
		iterator end()
		{
			iterator it(this->top());
			it++;
			return it;
		}
};

#endif
