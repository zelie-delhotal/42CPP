/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:43:34 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/21 15:13:50 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s;
	std::string &stringREF = s;

	std::cout << "address of string: " << &s << std::endl;
	std::cout << "address held by PTR: " << stringPTR << std::endl;
	std::cout << "address held by REF: " << &stringREF << std::endl;

	std::cout << "content of string: " << s << std::endl;
	std::cout << "value pointed to by PTR: " << *stringPTR << std::endl;
	std::cout << "value pointed to by REF: " << stringREF << std::endl;
}
