/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:32:53 by lide              #+#    #+#             */
/*   Updated: 2022/12/14 17:24:17 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	std::string name2 = "Frag";
	FragTrap Frag(name2);

	Frag.attack("trap");
	Frag.highFivesGuys();
	Frag.takeDamage(10);
	FragTrap trap(Frag);
	Frag.takeDamage(10);
	trap.takeDamage(10);
	Frag.beRepaired(10);

	return (0);
}
