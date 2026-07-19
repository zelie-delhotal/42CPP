/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 18:34:35 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/19 08:00:24 by gdelhota         ###   ########.fr       */
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
				iterator&	operator++()
				{
					object++;
					return *this;
				}
				iterator	operator++(int)
				{
					iterator ret = *this;
					object++;
					return ret;
				}
				iterator&	operator--()
				{
					object--;
					return *this;
				}
				iterator	operator--(int)
				{
					iterator ret = *this;
					object--;
					return ret;
				}
				bool		operator==(iterator &other)
				{
					return (object == other.object);
				}
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
