/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:32:53 by lide              #+#    #+#             */
/*   Updated: 2023/01/17 16:34:38 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap Frag("Frag");

	Frag.attack("trap");
	Frag.highFivesGuys();
	Frag.takeDamage(10);
	FragTrap trap(Frag);
	Frag.takeDamage(10);
	trap.takeDamage(10);
	Frag.beRepaired(10);

	return (0);
}
