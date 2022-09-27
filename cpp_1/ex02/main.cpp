/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:24:24 by lide              #+#    #+#             */
/*   Updated: 2022/09/27 14:37:37 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "str : " << &str << std::endl
	<< "stringPTR : " << stringPTR << std::endl
	<< "stringREF : " << &stringREF << std::endl << std::endl;

	std::cout << "str : " << str << std::endl
	<< "stringPTR : " << *stringPTR << std::endl
	<< "stringREF : " << stringREF << std::endl;

	return (0);
}
