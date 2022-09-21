/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:09:36 by lide              #+#    #+#             */
/*   Updated: 2022/09/21 20:20:44 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : index(-1) {}

PhoneBook::~PhoneBook(void) {}

int	find_str(char *line, std::string str) {
	while (str[0] == 0)
	{
		std::cout << line;
		std::cin >> str;
		if (str[0] == 0)
			std::cout << "need some information !" << std::endl;
	}
}

//doit gerer + de 8
void	PhoneBook::add(void) {
	this->index++;
	if (this->index == 8)
		this->index = 0;
	find_str("first name : ", this->contact[index].first_name);
	find_str("last name : ", this->contact[index].last_name);
	find_str("nickname : ", this->contact[index].nickname);
	find_str("phone number : ", this->contact[index].number);
	find_str("darkest secret : ", this->contact[index].secret);
}

std::string	ft_short(std::string name) {
	int	len = name.length();
	std::string shorted = name;

	if (len < 10)
		for (int diff = 10 - len; diff > 0; diff--)
			shorted.insert(0, " ");
	else if (len > 10)
	{
		shorted.resize(9);
		shorted + '.';
	}
	return (shorted);
}

void	PhoneBook::print_short(void) const {
	std::string	id;

	if (this->contact[0].first_name[0] == 0)
	{
		std::cout << "there is no contact in the PhoneBook" << std::endl;
		return ;
	}
	for (int i = 0; this->contact[i].first_name[0] != 0 && i < 8; i++)
		std::cout << "|         " << i
		<< "|" << ft_short(this->contact[i].first_name)
		<< "|" << ft_short(this->contact[i].last_name)
		<< "|" << ft_short(this->contact[i].nickname) << "|" << std::endl;
	std::cout << "Enter the contact ID : ";
	std::cin >> id;
	if (id.length() > 1 || (id[0] < '0' && id[0] > '7') || this->contact[atoi(id.c_str())].first_name[0] == 0)
	{
		std::cout << "Wrong ID" << std::endl;
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

void	PhoneBook::search(void) const {
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	print_short();
}

