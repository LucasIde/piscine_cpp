/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:47:17 by lide              #+#    #+#             */
/*   Updated: 2022/12/06 18:12:18 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	area(float x1, float y1, float x2, float y2, float x3, float y3) {
	return (fabs(roundf((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 -y2)) / 2.0)));
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float ar;
	float ar1;
	float ar2;
	float ar3;

	ar = area(a.get_fixed_x().toFloat(), a.get_fixed_y().toFloat(), b.get_fixed_x().toFloat(), b.get_fixed_y().toFloat(), c.get_fixed_x().toFloat(), c.get_fixed_y().toFloat());
	ar1 = area(point.get_fixed_x().toFloat(), point.get_fixed_y().toFloat(), b.get_fixed_x().toFloat(), b.get_fixed_y().toFloat(), c.get_fixed_x().toFloat(), c.get_fixed_y().toFloat());
	ar2 = area(a.get_fixed_x().toFloat(), a.get_fixed_y().toFloat(), point.get_fixed_x().toFloat(), point.get_fixed_y().toFloat(), c.get_fixed_x().toFloat(), c.get_fixed_y().toFloat());
	ar3 = area(a.get_fixed_x().toFloat(), a.get_fixed_y().toFloat(), b.get_fixed_x().toFloat(), b.get_fixed_y().toFloat(), point.get_fixed_x().toFloat(), point.get_fixed_y().toFloat());
	if (ar == ar1 + ar2 + ar3)
		return (true);
	return (false);
}
