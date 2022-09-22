/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:39:26 by lide              #+#    #+#             */
/*   Updated: 2022/09/22 19:27:01 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string line;
	PhoneBook phone;

	while ((line.compare("EXIT")))
	{
		std::cout << "The program only accepts ADD, SEARCH and EXIT :" << std::endl;
		std::getline(std::cin, line);
		if (!line.compare("ADD"))
			phone.add();
		else if (!line.compare("SEARCH"))
			phone.search();
	}
}
