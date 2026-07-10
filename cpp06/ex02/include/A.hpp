/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 01:17:26 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/10 02:10:23 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
#define A_HPP

#include "Base.hpp"
#include <cstdlib>
#include <ctime>

class Base;

class A : public Base
{
	public:
		A();
		~A();
};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif
