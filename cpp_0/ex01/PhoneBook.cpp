/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:09:36 by lide              #+#    #+#             */
/*   Updated: 2022/09/22 19:42:28 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : index(-1) {}

PhoneBook::~PhoneBook(void) {}

void	find_str(std::string info, std::string *str) {
	std::string line;
	while (line[0] == 0)
	{
		std::cout << info;
		std::getline(std::cin, line);
		if (line[0] == 0)
			std::cout << "need some information !" << std::endl;
	}
	*str = line;
}

void	PhoneBook::add(void) {
	this->index++;
	if (this->index > 7)
		this->index = 0;
	find_str("first name : ", &(this->contact[index].first_name));
	find_str("last name : ", &(this->contact[index].last_name));
	find_str("nickname : ", &(this->contact[index].nickname));
	find_str("phone number : ", &(this->contact[index].number));
	find_str("darkest secret : ", &(this->contact[index].secret));
}

std::string	ft_short(std::string name) {
	int	len = name.length();
	std::string shorted = name;

	if (len < 10)
		for (int diff = 10 - len; diff > 0; diff--)
			shorted.insert(0, " ");
	else if (len > 10)
	{
		shorted.resize(10);
		shorted[9] = '.';
	}
	return (shorted);
}

void	PhoneBook::search(void) const {
	std::string	id;

	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	if (this->contact[0].first_name[0] == 0)
	{
		std::cout << "there is no contact in the PhoneBook" << std::endl;
		return ;
	}
	for (int i = 0;i < 8 && this->contact[i].first_name[0] != 0; i++)
		std::cout << "|         " << i
		<< "|" << ft_short(this->contact[i].first_name)
		<< "|" << ft_short(this->contact[i].last_name)
		<< "|" << ft_short(this->contact[i].nickname) << "|" << std::endl;
	std::cout << "Enter the contact ID : ";
	std::getline(std::cin, id);
	if (id.length() > 1 || id[0] < '0' || id[0] > '7')
	{
		std::cout << "Wrong ID" << std::endl;
		return ;
	}
	else if (this->contact[atoi(id.c_str())].first_name[0] == 0)
	{
		std::cout << "there is no contact saved for this ID" << std::endl;
		return ;
	}
	else
	{
		int nb = atoi(id.c_str());
		std::cout << this->contact[nb].first_name << std::endl
		<< this->contact[nb].last_name << std::endl
		<< this->contact[nb].nickname << std::endl
		<< this->contact[nb].number << std::endl
		<< this->contact[nb].secret << std::endl;
	}
}
