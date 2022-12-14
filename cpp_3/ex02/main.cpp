/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:32:53 by lide              #+#    #+#             */
/*   Updated: 2022/12/14 15:44:29 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	std::string name2 = "scav";
	ScavTrap scav(name2);

	scav.attack("trap");
	scav.guardGate();
	scav.takeDamage(10);
	ScavTrap trap(scav);
	scav.takeDamage(10);
	trap.takeDamage(10);
	scav.beRepaired(10);

	return (0);
}
