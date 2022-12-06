/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:59:49 by lide              #+#    #+#             */
/*   Updated: 2022/12/06 17:29:39 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {

	private:
		Fixed const x;
		Fixed const y;

	public:
		Point(void);
		Point(const float fx, const float fy);
		Point(Point const &src);
		~Point(void);

		Point	&operator=(Point const &rhs);

		Fixed const	get_fixed_x(void) const;
		Fixed const	get_fixed_y(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
