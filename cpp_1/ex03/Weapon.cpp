/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:13:04 by lide              #+#    #+#             */
/*   Updated: 2022/09/27 19:20:25 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string w) : _weapon(w) {}

Weapon::~Weapon(void) {}

std::string	Weapon::getType(void) const {
	return (this->_weapon);
}

void Weapon::setType(std::string w) {
	this->_weapon = w;
	return;
}
