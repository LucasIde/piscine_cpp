/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:17:38 by lide              #+#    #+#             */
/*   Updated: 2022/12/11 18:35:55 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie	*horde;
	int		nb = 5;

	horde = zombieHorde(nb, "Zombie");
	for (int i = 0; i < nb; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
