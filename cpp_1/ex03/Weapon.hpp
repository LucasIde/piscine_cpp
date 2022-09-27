/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:44:43 by lide              #+#    #+#             */
/*   Updated: 2022/09/27 19:21:07 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {

	public:
		Weapon(std::string w);
		~Weapon(void);

		std::string	getType(void) const;
		void		setType(std::string w);

	private:
		std::string _weapon;
};

#endif
