/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:39:24 by lide              #+#    #+#             */
/*   Updated: 2022/12/14 17:24:38 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	std::cout << "default FragTrap is alive" << std::endl;
}

FragTrap::FragTrap(std::string &name) : ClapTrap(name) {
	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	std::cout << "FragTrap " << name << " is alive" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) {
	*this = src;
	std::cout << "FragTrap " << src._Name << " has been cloned" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->_Name << " has been destroyed" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {
	this->_Name = rhs._Name;
	this->_Hit_points = rhs._Hit_points;
	this->_Energy_points = rhs._Energy_points;
	this->_Attack_damage = rhs._Attack_damage;
	return (*this);
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->_Name << " ask for a High Fives" <<std::endl;
}
