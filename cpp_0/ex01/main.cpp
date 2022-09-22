/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:39:26 by lide              #+#    #+#             */
/*   Updated: 2022/09/22 02:03:42 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string line;
	PhoneBook phone;

	while (1)
	{
		std::cout << "ADD | SEARCH" << std::endl;
		std::cin >> line;
		if (!line.compare("ADD"))
			phone.add();
		else if (!line.compare("SEARCH"))
			phone.search();
	}
}
