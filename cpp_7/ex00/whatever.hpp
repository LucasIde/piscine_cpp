/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:24:50 by lide              #+#    #+#             */
/*   Updated: 2023/01/20 18:03:03 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void swap(T &lhs, T &rhs) {
	T tmp = lhs;
	lhs = rhs;
	rhs = tmp;
}

template<typename T>
T const &min(T const &lhs, T const &rhs) {
	return (lhs < rhs ? lhs : rhs);
}

template<typename T>
T const &max(T const &lhs, T const &rhs) {
	return (lhs > rhs ? lhs : rhs);
}

