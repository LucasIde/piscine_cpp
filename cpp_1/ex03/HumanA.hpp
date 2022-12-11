/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:35:23 by lide              #+#    #+#             */
/*   Updated: 2022/12/11 18:56:46 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {

	public:
		HumanA(std::string name, Weapon &w);
		~HumanA();

		void	setWeapon(Weapon &w);
		void	attack(void) const;

	private:
		std::string _name;
		Weapon &type;
};

#endif
