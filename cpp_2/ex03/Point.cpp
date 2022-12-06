/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:22:27 by lide              #+#    #+#             */
/*   Updated: 2022/12/06 17:45:29 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0) {}

Point::Point(const float fx, const float fy) : x(fx), y(fy) {}

Point::Point(Point const &src) : x(src.get_fixed_x()), y(src.get_fixed_y()){}

Point::~Point(void) {}

Point	&Point::operator=(Point const &rhs) {
	(void)rhs;
	return (*this);
}

Fixed const	Point::get_fixed_x(void) const {
	return(this->x);
}

Fixed const	Point::get_fixed_y(void) const {
	return(this->y);
}
