/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:17:38 by lide              #+#    #+#             */
/*   Updated: 2022/09/27 20:15:05 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie	*horde;
	int		nb = 10;

	horde = zombieHorde(nb, "Zombie");
	for (int i = 0; i < nb; i++)
		horde[i].annouce();
	delete [] horde;
	return (0);
}