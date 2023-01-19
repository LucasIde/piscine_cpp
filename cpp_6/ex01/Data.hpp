/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:44:31 by lide              #+#    #+#             */
/*   Updated: 2023/01/19 18:17:44 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <cstdint>

typedef struct s_Data {
	std::string	name;
	int					number;
}	Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
