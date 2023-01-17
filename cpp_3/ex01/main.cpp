/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:32:53 by lide              #+#    #+#             */
/*   Updated: 2023/01/17 16:53:16 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scav("scav");

	scav.attack("trap");
	scav.guardGate();
	scav.takeDamage(10);
	ScavTrap trap(scav);
	trap.attack("trap");
	scav.takeDamage(10);
	trap.takeDamage(10);
	scav.beRepaired(10);

	return (0);
}
