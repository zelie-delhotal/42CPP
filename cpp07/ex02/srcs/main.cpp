/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 21:36:45 by gdelhota          #+#    #+#             */
/*   Updated: 2026/07/14 16:36:56 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int main(void)
{
	Array<int> a = Array<int>();
	std::cout << a.size() << std::endl;
	Array<int> b = Array<int>(4);
	b[0] = 42;
	b[3] = 4;
	Array<int> c = b;
	Array<int> d(b);
	for (unsigned int i=0; i<b.size(); i++)
		std::cout << b[i] << std::endl;
	std::cout << "Assignment operator test:" << std::endl;
	for (unsigned int i=0; i<c.size(); i++)
		std::cout << c[i] << std::endl;
	std::cout << "Copy constructor test:" << std::endl;
	for (unsigned int i=0; i<d.size(); i++)
		std::cout << d[i] << std::endl;
	std::cout << "Changing original array:" << std::endl;
	for (unsigned int i=0; i<b.size(); i++)
		b[i] = i;
	for (unsigned int i=0; i<b.size(); i++)
		std::cout << b[i] << std::endl;
	std::cout << "these two must remain the same:" << std::endl;
	for (unsigned int i=0; i<b.size(); i++)
		std::cout << c[i] << std::endl;
	for (unsigned int i=0; i<d.size(); i++)
		std::cout << d[i] << std::endl;
	std::cout << "Trying to access beyond array size:" << std::endl;
	try
	{
		std::cout << b[4] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Testing with other types" << std::endl;
	Array<char> char_array = Array<char>(2);
	for (unsigned int i=0; i<char_array.size(); i++)
		char_array[i] = 'a' + i;
	for (unsigned int i=0; i<char_array.size(); i++)
		std::cout << char_array[i] << std::endl;
	Array<Array<double> > arr_arr = Array<Array<double> >(4);
	for (unsigned int i=0; i<arr_arr.size(); i++)
	{
		arr_arr[i] = Array<double>(i);
	}
	for (unsigned int i=0; i<arr_arr.size(); i++)
	{
		std::cout << "Array no " << i << std::endl;
		for (unsigned int j=0; j<arr_arr[i].size(); j++)
		{
			std::cout << arr_arr[i][j] << std::endl;
		}
	}
}
