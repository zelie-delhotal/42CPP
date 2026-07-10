/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 01:31:36 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/10 03:07:39 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

A::A()
{
}

A::~A()
{
}

Base*	generate(void)
{
	Base*	res;
	int		r;

	srand(time(0));
	r = rand() % 3;
	switch (r)
	{
		case 0:
			res = new A();
			break;
		case 1:
			res = new B();
			break;
		case 2:
			res = new C();
			break;
	}
	return res;
}

void	identify(Base* p)
{
	A* aptr = dynamic_cast<A*>(p);
	if (aptr)
		std::cout << "A" << std::endl;
	B* bptr = dynamic_cast<B*>(p);
	if (bptr)
		std::cout << "B" << std::endl;
	C*  cptr = dynamic_cast<C*>(p);
	if (cptr)
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	try {
		A& aref = dynamic_cast<A&>(p);
		(void) aref;
		std::cout << "A" << std::endl;
	}
	catch (std::exception& e)
	{
		(void) e;
		try {
			B& bref = dynamic_cast<B&>(p);
			(void) bref;
			std::cout << "B" << std::endl;
		}
		catch (std::exception& e)
		{
			(void) e;
			try {
				C& cref = dynamic_cast<C&>(p);
					(void) cref;
				std::cout << "C" << std::endl;
			}
			catch (std::exception& e)
			{
			}
		}
	}
}
