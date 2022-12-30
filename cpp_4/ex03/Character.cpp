/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:26:37 by lide              #+#    #+#             */
/*   Updated: 2022/12/30 17:17:24 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("pnj") {
	for (int i = 0; i < 4; i++)
		this->spell[i] = NULL;
}

Character::Character(std::string const &name) : _name(name) {
	for (int i = 0; i < 4; i++)
		this->spell[i] = NULL;
}

Character::Character(Character const &rhs) {
	*this = rhs;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		delete this->spell[i];
}

Character &Character::operator=(Character const &rhs) {
	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
		delete this->spell[i];
	for (int i = 0; i < 4; i++)
	{
		if (rhs.spell[i] != NULL)
			this->spell[i] = rhs.spell[i]->clone();
		else
			this->spell[i] = NULL;
	}
	return (*this);
}

std::string const &Character::getName() const {
	return (this->_name);
}

void Character::use(int idx, ICharacter &target) {
	if (this->spell[idx] == NULL || idx < 0 || idx > 3)
		return ;
	this->spell[idx]->use(target);
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++)
	{
		if (this->spell[i] == NULL)
		{
			this->spell[i] = m;//doit peut etre delete le materia si pas de place
			return ;
		}
	}
}

void Character::unequip(int idx) {
	this->spell[idx] = NULL;
}
