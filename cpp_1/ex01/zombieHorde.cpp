/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:14:42 by lide              #+#    #+#             */
/*   Updated: 2022/11/28 14:45:54 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	if (N < 1)
	{
		std::cout << "horde can't be less than 1" << std::endl;
		return (NULL);
	}

	Zombie *horde = new Zombie[N];

	for(int i = 0; i < N; i++)
		horde[i].setname(name);
	return (horde);
}
