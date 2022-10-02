/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 00:39:16 by lide              #+#    #+#             */
/*   Updated: 2022/10/02 15:09:31 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl harl;

	if (argc > 2)
	{
		std::cout << "[ only one complain is accepted ]" << std::endl <<std::endl;
		return (1);
	}
	if (argc < 2)
	{
		std::cout << "[ Harl need a complain to live ]" << std::endl <<std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}
