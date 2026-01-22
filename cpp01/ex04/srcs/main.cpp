/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 01:30:37 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/22 03:45:56 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

int main(int ac, char **av)
{
	std::string	fileName;
	std::string	line;
	std::ofstream outFile;

	if (ac != 4)
	{
		std::cout << "Wrong number of arguments: Syntax is ./sed <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::ifstream	inFile(av[1]);
	if (!inFile.is_open())
	{
		std::cout << "Unable to open file " << av[1] << std::endl;
		return (1);
	}
	fileName.append(av[1]);
	fileName.append(".replace");
	outFile.open(fileName.c_str());
	if (!outFile.is_open())
	{
		inFile.close();
		std::cout << "Unable to create file " << av[1] << ".replace" << std::endl;
		return (1);
	}
	while (getline(inFile, line))
	{
		size_t found = line.find(av[2]);
		while (found != std::string::npos)
		{
			line.erase(found, std::strlen(av[2]));
			line.insert(found, av[3]);
			found = line.find(av[2], found + std::strlen(av[3]));
		}
		outFile << line << std::endl;
	}
	inFile.close();
	outFile.close();
}
