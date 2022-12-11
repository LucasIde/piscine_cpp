/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:17:38 by lide              #+#    #+#             */
/*   Updated: 2022/12/11 18:34:39 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie *body;

	body = newZombie("zaine-el-abidine");
	randomChump("cassandre");
	body->announce();
	delete body;
	return (0);
}
