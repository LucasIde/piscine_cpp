/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:32:53 by lide              #+#    #+#             */
/*   Updated: 2023/01/17 17:23:09 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap robot1("robot1");
    ClapTrap *  robot2 = new DiamondTrap("robot2");

    std::cout << std::endl;
    std::cout << std::endl;

    robot1.highFivesGuys();
    robot1.guardGate();
    robot1.whoAmI();
    std::cout << std::endl;

    robot1.attack( "robot2" );
    robot2->attack( "robot2" );
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
