/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:35:33 by lide              #+#    #+#             */
/*   Updated: 2022/12/11 18:56:46 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w) : _name(name) , type(w) {}

HumanA::~HumanA(void) {}

void	HumanA::setWeapon(Weapon &w) {
	this->type = w;
}

void	HumanA::attack(void) const {
	std::cout << this->_name << " attacks with their " << this->type.getType() << std::endl;
}
