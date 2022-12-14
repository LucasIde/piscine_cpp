/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:40:27 by lide              #+#    #+#             */
/*   Updated: 2022/12/14 15:13:33 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:
		ScavTrap();
		ScavTrap(std::string &name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap();

		ScavTrap	&operator=(ScavTrap const &rhs);

		void	attack(const std::string& target);
		void	guardGate();
};
