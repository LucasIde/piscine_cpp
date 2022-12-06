/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:50:07 by lide              #+#    #+#             */
/*   Updated: 2022/12/06 18:08:50 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point	a(1.0, 1.0);
	Point	b(3.0, 5.0);
	Point	c(5.0, 1.0);
	Point	p(5.01, 3.0);
	Point	p1(0.999, 3.0);
	Point	p2(2.0, 3.0);
	Point	p3(2.0, 7.0);
	int		check;

	check = bsp(a, b, c, p);
	std::cout << check << std::endl;
	check = bsp(a, b, c, p1);
	std::cout << check << std::endl;
	check = bsp(a, b, c, p2);
	std::cout << check << std::endl;
	check = bsp(a, b, c, p3);
	std::cout << check << std::endl;
	return (0);
}
