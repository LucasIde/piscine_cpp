/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:32:53 by lide              #+#    #+#             */
/*   Updated: 2022/12/13 17:05:31 by lide             ###   ########.fr       */
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
	scav.beRepaired(10);

	return (0);
}
