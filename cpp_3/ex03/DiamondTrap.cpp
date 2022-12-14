/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:05:53 by lide              #+#    #+#             */
/*   Updated: 2022/12/14 19:11:11 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {
	this->_Name = "default DiamondTrap";
	this->_Hit_points = FragTrap::_Hit_points;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
	std::cout << "default DiamondTrap is alive" << std::endl;
}

DiamondTrap::DiamondTrap(std::string &name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {
	ClapTrap::_Name = name + "_clap_name";
	this->_Name = name;
	this->_Hit_points = FragTrap::_Hit_points;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
	std::cout << "DiamondTrap " << name << " is alive" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) {
	*this = src;
	std::cout << "DiamondTrap " << src._Name << " has been cloned" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->_Name << " has been destroyed" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs) {
	this->_Name = rhs._Name;
	this->_Hit_points = rhs._Hit_points;
	this->_Energy_points = rhs._Energy_points;
	this->_Attack_damage = rhs._Attack_damage;
	return (*this);
}

void DiamondTrap::whoAmI() {
	std::cout << "My name is " << this->_Name << " and my ClapTrap name is " << ClapTrap::_Name << std::endl;
}
