/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 21:11:11 by lide              #+#    #+#             */
/*   Updated: 2022/12/08 00:10:48 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
	private:
		std::string	_Name;
		int			_Hit_points;
		int			_Energy_points;
		int			_Attack_damage;

	public:
	ClapTrap(void);
	ClapTrap(std::string &name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap(void);

	ClapTrap	&operator=(ClapTrap const &rhs);

	std::string	get_name(void) const;
	int			get_hit(void) const;
	int			get_energy(void) const;
	int			get_attack(void) const;

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
