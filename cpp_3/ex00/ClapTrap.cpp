/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:25:21 by lide              #+#    #+#             */
/*   Updated: 2022/12/08 00:12:31 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _Name("default ClapTrap"), _Hit_points(10), _Energy_points(10), _Attack_damage(0) {
	std::cout << "default ClapTrap is alive" << std::endl;
}

ClapTrap::ClapTrap(std::string &name) : _Name(name), _Hit_points(10), _Energy_points(10), _Attack_damage(0) {
	std::cout << "Claptrap " << name << " is alive" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << "Claptrap " << src.get_name() << " has been cloned" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Claptrap has been destroyed" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs) {
	this->_Name = rhs.get_name();
	this->_Hit_points = rhs.get_hit();
	this->_Energy_points = rhs.get_hit();
	this->_Attack_damage = rhs.get_attack();
	return (*this);
}

	std::string	ClapTrap::get_name(void) const {
		return (this->_Name);
	}

	int	ClapTrap::get_hit(void) const {
		return (this->_Hit_points);
	}

	int	ClapTrap::get_energy(void) const {
		return (this->_Energy_points);
	}

	int	ClapTrap::get_attack(void) const {
		return (this->_Attack_damage);
	}

	void ClapTrap::attack(const std::string& target) {
		std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_Attack_damage << " points of damage!";
		this->_Energy_points--;
	}

	void takeDamage(unsigned int amount) {}

	void beRepaired(unsigned int amount) {}
