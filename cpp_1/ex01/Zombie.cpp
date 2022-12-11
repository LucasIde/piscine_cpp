/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:14:02 by lide              #+#    #+#             */
/*   Updated: 2022/12/11 18:35:55 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::~Zombie(void) {
	std::cout << this->_name << " has been destroyed" << std::endl;
}

void	Zombie::setname(std::string n) {
	this->_name = n;
	return;
}

void	Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
