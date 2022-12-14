/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:32:53 by lide              #+#    #+#             */
/*   Updated: 2022/12/14 19:05:37 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "DiamondTrap.hpp"

// int main(void)
// {
// 	std::string name2 = "is unbreakable";
// 	DiamondTrap diamond(name2);

// 	diamond.attack("trap");
// 	diamond.guardGate();
// 	diamond.highFivesGuys();
// 	diamond.takeDamage(10);
// 	DiamondTrap trap(diamond);
// 	diamond.takeDamage(10);
// 	trap.takeDamage(10);
// 	diamond.beRepaired(10);
// 	diamond.whoAmI();

// 	return (0);
// }

#include "DiamondTrap.hpp"
#include <iostream>

int main() {
	std::string name = "robot1";
	std::string name2 = "robot2";
    DiamondTrap robot1(name);
    ClapTrap *  robot2 = new DiamondTrap(name2);

    std::cout << std::endl;
    std::cout << std::endl;

    robot1.highFivesGuys();
    robot1.whoAmI();
    std::cout << std::endl;

    robot1.attack( "robot2" );
    robot2->takeDamage( 0 );
    std::cout << std::endl;

    robot1.beRepaired( 5 );
    std::cout << std::endl;

    robot2->takeDamage( 20 );
    robot2->takeDamage( 100 );
    robot2->beRepaired( 200 );
    std::cout << std::endl;

    delete robot2;

    return 0;
}
