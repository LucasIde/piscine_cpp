/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:25:21 by lide              #+#    #+#             */
/*   Updated: 2022/12/09 17:04:27 by lide             ###   ########.fr       */
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
	std::cout << "Claptrap " << this->_Name << " has been destroyed" << std::endl;
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
		if (this->_Energy_points > 0 && this->_Hit_points > 0)
		{
			std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_Attack_damage << " points of damage!" << std::endl;
			this->_Energy_points--;
		}
		else if (this->_Hit_points <= 0)
			std::cout << "ClapTrap " << this->_Name << " can't attacks when he is dead" << std::endl;
		else
			std::cout << "ClapTrap " << this->_Name << " can't attacks " << target << " without energy" << std::endl;
	}

	void ClapTrap::takeDamage(unsigned int amount) {
		if ((this->_Hit_points - (long)amount) < -2147483648)
			this->_Hit_points = -2147483648;
		else
			this->_Hit_points -= amount;
		if (this->_Hit_points > 0)
			std::cout << "ClapTrap " << this->_Name << " take " << amount << " damage, he has " << this->_Hit_points << " left" << std::endl;
		else
			std::cout << "ClapTrap " << this->_Name << " take " << amount << " damage and died" << std::endl;
	}

	void ClapTrap::beRepaired(unsigned int amount) {
		if (this->_Energy_points > 0 && this->_Hit_points > 0)
		{
			if ((this->_Hit_points + amount) > 2147483647)
				this->_Hit_points = 2147483647;
			else
				this->_Hit_points += amount;
			this->_Energy_points--;
			std::cout << "ClapTrap " << this->_Name << " repared itself and gain " << amount << " Hit points. He has now " << this->_Hit_points << " hit points" << std::endl;
		}
		else if (this->_Hit_points <= 0)
			std::cout << "too late ClapTrap " << this->_Name << " can't repared itself, he is already dead" << std::endl;
		else
			std::cout << "ClapTrap " << this->_Name << " can't repared itself without energy" << std::endl;
	}
