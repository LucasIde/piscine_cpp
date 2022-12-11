/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:17:19 by lide              #+#    #+#             */
/*   Updated: 2022/12/11 18:56:46 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {

	public:
		HumanB(std::string name);
		~HumanB(void);

		void	setWeapon(Weapon &w);
		void	attack(void) const;

	private:
		std::string _name;
		Weapon *type;
};

#endif
