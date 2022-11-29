/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 00:39:16 by lide              #+#    #+#             */
/*   Updated: 2022/11/29 17:39:11 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
	Harl harl;

	harl.complain("ARNING");

	harl.complain("WARNING");

	harl.complain("INFO");

	harl.complain("DEBUG");

	harl.complain("");

	harl.complain("ERROR");

	harl.complain("eogyoergt orzeigth erg");

	return (0);
}
