/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:50:37 by lide              #+#    #+#             */
/*   Updated: 2022/12/13 17:12:26 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : _Name("default ScavTrap"), _Hit_points(100), _Energy_points(50), _Attack_damage(20) {
	std::cout << "default ScavTrap is alive" << std::endl;
}

ScavTrap::ScavTrap(std::string &name) : _Name(name), _Hit_points(100), _Energy_points(50), _Attack_damage(20) {
	std::cout << "ScavTrap " << name << " is alive" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
	std::cout << "ScavTrap " << src.get_name() << " has been cloned" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->_Name << " has been destroyed" << std::endl;
}

std::string	ScavTrap::get_name(void) const {
	return (this->_Name);
}

int	ScavTrap::get_hit(void) const {
	return (this->_Hit_points);
}

int	ScavTrap::get_energy(void) const {
	return (this->_Energy_points);
}

int	ScavTrap::get_attack(void) const {
	return (this->_Attack_damage);
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {
	this->_Name = rhs.get_name();
	this->_Hit_points = rhs.get_hit();
	this->_Energy_points = rhs.get_hit();
	this->_Attack_damage = rhs.get_attack();
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
