/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:09:36 by lide              #+#    #+#             */
/*   Updated: 2022/10/03 15:52:57 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : index(-1) {}

PhoneBook::~PhoneBook(void) {}

std::string	find_str(std::string info) {
	std::string line;
	while (line[0] == 0)
	{
		std::cout << info;
		std::getline(std::cin, line);
		if (line[0] == 0)
			std::cout << "need some information !" << std::endl;
		else
			std::cout << line << std::endl;
	}
	return (line);
}

void	PhoneBook::add(void) {
	this->index++;
	if (this->index > 7)
		this->index = 0;
	this->contact[index].setFirstName(find_str("first name : "));
	this->contact[index].setLastName(find_str("last name : "));
	this->contact[index].setNickname(find_str("nickname : "));
	this->contact[index].setNumber(find_str("phone number : "));
	this->contact[index].setSecret(find_str("darkest secret : "));
}

std::string	ft_short(std::string name) {
	int	len = name.length();
	std::string shorted = name;

	if (len < 10)
		std::cout << std::setw(10);
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
	if ((this->contact[0].getFirstName())[0] == 0)
	{
		std::cout << "there is no contact in the PhoneBook" << std::endl;
		return ;
	}
	for (int i = 0;i < 8; i++)
		std::cout << "|         " << i
		<< "|" << ft_short(this->contact[i].getFirstName())
		<< "|" << ft_short(this->contact[i].getLastName())
		<< "|" << ft_short(this->contact[i].getNickname()) << "|" << std::endl;
	std::cout << "Enter the contact ID : ";
	std::getline(std::cin, id);
	if (id.length() > 1 || id[0] < '0' || id[0] > '7')
	{
		std::cout << "Wrong ID" << std::endl;
		return ;
	}
	else if (this->contact[atoi(id.c_str())].getFirstName()[0] == 0)
	{
		std::cout << "there is no contact saved for this ID" << std::endl;
		return ;
	}
	else
	{
		int nb = atoi(id.c_str());
		std::cout << this->contact[nb].getFirstName() << std::endl
		<< this->contact[nb].getLastName() << std::endl
		<< this->contact[nb].getNickname() << std::endl
		<< this->contact[nb].getNumber() << std::endl
		<< this->contact[nb].getSecret() << std::endl;
	}
}
