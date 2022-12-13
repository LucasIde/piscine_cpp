/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:40:27 by lide              #+#    #+#             */
/*   Updated: 2022/12/13 17:13:15 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	private:
		std::string	_Name;
		int			_Hit_points;
		int			_Energy_points;
		int			_Attack_damage;

	public:
		ScavTrap();
		ScavTrap(std::string &name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap();

		ScavTrap	&operator=(ScavTrap const &rhs);

		std::string	get_name(void) const;
		int			get_hit(void) const;
		int			get_energy(void) const;
		int			get_attack(void) const;

		void	attack(const std::string& target);
		void	guardGate();
};
