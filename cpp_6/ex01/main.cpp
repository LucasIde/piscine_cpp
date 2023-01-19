/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:12:38 by lide              #+#    #+#             */
/*   Updated: 2023/01/19 18:31:39 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
	Data *data = new Data;
	Data *data2;
	uintptr_t tmp;

	data->name = "zaine";
	data->number = 3;

	std::cout << "name = " << data->name << " | number " << data->number << std::endl;
	std::cout << data << std::endl;

	tmp = serialize(data);

	std::cout << tmp << std::endl;

	data2 = deserialize(tmp);

	std::cout << data2 << std::endl;
	std::cout << "name = " << data2->name << " | number " << data2->number << std::endl;

	delete data;
}
