/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:13:04 by lide              #+#    #+#             */
/*   Updated: 2022/12/11 18:56:46 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string w) : type(w) {}

Weapon::~Weapon(void) {}

std::string	Weapon::getType(void) const {
	return (this->type);
}

void Weapon::setType(std::string w) {
	this->type = w;
	return;
}
