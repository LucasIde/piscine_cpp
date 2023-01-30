/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:59:06 by lide              #+#    #+#             */
/*   Updated: 2023/01/30 17:22:19 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {

	//array
	{
	std::cout << "Array :" <<std::endl;
	std::array<int, 5> array;

	for (int i = 0; i < 5; i++) {
		array[i] = i;
	}

	try {
		std::array<int, 5>::const_iterator tmp = easyfind(array, 4);
		std::cout << "value \"" << *tmp << "\" has been found" << std::endl;
		tmp = easyfind(array, 5);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	}

	//vector
	{
	std::cout << "Vector :" <<std::endl;
	std::vector<int> vector(4, 3);

	try {
		std::vector<int>::const_iterator tmp = easyfind(vector, 3);
		std::cout << "value \"" << *tmp << "\" has been found" << std::endl;
		tmp = easyfind(vector, 44);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	}

	//deque
	{
	std::cout << "Deque :" <<std::endl;
	std::deque<int> deque;

	try {
		std::deque<int>::const_iterator tmp = easyfind(deque, 3);
		std::cout << "value \"" << *tmp << "\" has been found" << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	}

	//list
	{
	std::cout << "List :" <<std::endl;
	std::list<int> lst;

	lst.push_back(1);
	lst.push_back(19);
	lst.push_back(24);

	try {
		std::list<int>::const_iterator tmp = easyfind(lst, 19);
		std::cout << "value \"" << *tmp << "\" has been found" << std::endl;
		tmp = easyfind(lst, 44);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	}
}
