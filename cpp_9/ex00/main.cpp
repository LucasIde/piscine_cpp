/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:12:48 by lide              #+#    #+#             */
/*   Updated: 2023/04/11 14:00:44 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
	if (argc < 2) {
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}
	if (argc > 2) {
		std::cout << "Error: only one file is accepted." << std::endl;
		return (1);
	}
	BitcoinExchange Btc(argv[1]);
	Btc.create_database();
	Btc.create_file_value();
	return (0);
}
