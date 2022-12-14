/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:56:36 by lide              #+#    #+#             */
/*   Updated: 2022/12/14 18:42:18 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	private:
		std::string _Name;

	public:
		DiamondTrap();
		DiamondTrap(std::string &name);
		DiamondTrap(DiamondTrap const &src);
		~DiamondTrap();

		DiamondTrap &operator=(DiamondTrap const &rhs);

		void whoAmI();
};
