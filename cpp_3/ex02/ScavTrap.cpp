/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:50:37 by lide              #+#    #+#             */
/*   Updated: 2023/01/17 16:54:07 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	std::cout << "default ScavTrap is alive" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	std::cout << "ScavTrap " << name << " is alive" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src) {
	std::cout << "ScavTrap " << src._Name << " has been cloned" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->_Name << " has been destroyed" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {
	this->_Name = rhs._Name;
	this->_Hit_points = rhs._Hit_points;
	this->_Energy_points = rhs._Energy_points;
	this->_Attack_damage = rhs._Attack_damage;
	return (*this);
}

void ScavTrap::attack(const std::string& target) {
	if (this->_Energy_points > 0 && this->_Hit_points > 0)
	{
		std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_Attack_damage << " points of damage!" << std::endl;
		this->_Energy_points--;
	}
	else if (this->_Hit_points <= 0)
		std::cout << "ScavTrap " << this->_Name << " can't attacks when he is dead" << std::endl;
	else
		std::cout << "ScavTrap " << this->_Name << " can't attacks " << target << " without energy" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_Name << " is now in mode Gate keeper" << std::endl;
}
