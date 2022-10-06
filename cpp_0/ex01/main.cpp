/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:39:26 by lide              #+#    #+#             */
/*   Updated: 2022/10/06 13:50:55 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string line;
	PhoneBook phone;

	while (1)
	{
		std::cout << "The program only accepts ADD, SEARCH and EXIT :" << std::endl;
		std::getline(std::cin, line);
		if (std::cin.eof())
			break;
		if (!line.compare("ADD"))
			phone.add();
		else if (!line.compare("SEARCH"))
			phone.search();
		else if (!line.compare("EXIT"))
			break;
	}
}
