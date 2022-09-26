/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:08:44 by lide              #+#    #+#             */
/*   Updated: 2022/09/26 19:16:37 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {

	public:
		Zombie();
		~Zombie();

		void	annouce(void);
		void	setname(std::string n);

	private:
		std::string	_name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
