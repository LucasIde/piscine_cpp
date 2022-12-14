/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:32:53 by lide              #+#    #+#             */
/*   Updated: 2022/12/14 15:45:04 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::string name = "trap";
	std::string name2 = "R2D2";
	ClapTrap trap(name);
	ClapTrap R2(name2);
	ClapTrap R3(R2);

	R3.takeDamage(1);
	//losing energy
	trap.attack("clap");
	trap.attack("clap");
	trap.attack("clap");
	trap.attack("clap");
	trap.attack("clap");
	trap.attack("clap");
	trap.attack("clap");
	trap.attack("clap");
	trap.attack("clap");
	trap.attack("clap");
	//0 energy left
	trap.attack("clap");
	trap.beRepaired(10);
	trap.takeDamage(5);

	R2.takeDamage(5);
	R2.beRepaired(5);
	R2.attack("C3PO");
	R2.takeDamage(10);
	R2.beRepaired(5);
	R2.attack("C3PO");
	return (0);
}
