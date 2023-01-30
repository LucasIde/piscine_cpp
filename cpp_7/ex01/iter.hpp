/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:26:17 by lide              #+#    #+#             */
/*   Updated: 2023/01/25 12:19:27 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void print(T const &value) {
	std::cout << value << std::endl;
}

template<typename A>
void iter(A *array, size_t len, void (*ft)(A const &)) {
	for (size_t i = 0; i < len; i++)
		ft(array[i]);
}

#endif
