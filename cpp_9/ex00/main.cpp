/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:12:48 by lide              #+#    #+#             */
/*   Updated: 2023/04/04 17:11:40 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
	if (argc < 2)
		std::cout << "Error: could not open file." << std::endl;
	else if (argc > 2)
		std::cout << "Error: only one file is accepted." << std::endl;
	else {
		BitcoinExchange ex(argv[1]);
		ex.create_database();
		ex.create_file_value();
	}
}
