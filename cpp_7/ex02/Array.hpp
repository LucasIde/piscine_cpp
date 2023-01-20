/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 18:02:20 by lide              #+#    #+#             */
/*   Updated: 2023/01/20 18:13:37 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
class Array<T> {
	private:
		T *_array
		unsigned int _len;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const rhs);
		~Array();

		Array &operator=(Array const &);

		size_t	size();
}
