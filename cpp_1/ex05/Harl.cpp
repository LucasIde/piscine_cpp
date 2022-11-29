/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:04:02 by lide              #+#    #+#             */
/*   Updated: 2022/11/29 17:39:17 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void	Harl::complain(std::string level) {
	std::string str[4] = {"ERROR", "WARNING", "INFO", "DEBUG"};
	void (Harl::*ft[4])(void) = {&Harl::error, &Harl::warning, &Harl::info, &Harl::debug};
	Harl harl;
	int i;

	for (i = 0; i < 4; i++)
		if (!level.compare(str[i]))
			break ;
	if (i < 4)
		(harl.*ft[i])();
}

void	Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
	return ;
}

void	Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money." << std::endl << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
	return ;
}

void	Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
	return ;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
	return ;
}
