/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 04:14:11 by gdelhota          #+#    #+#             */
/*   Updated: 2026/01/22 04:45:23 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>
#include <iostream>

int main(void)
{
	Harl h;

	h.complain("test");
	h.complain("DEBUG");
	h.complain("WARNING");
	h.complain("INFO");
	h.complain("ERROR");
}
