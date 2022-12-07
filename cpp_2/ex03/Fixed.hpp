/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:43:08 by lide              #+#    #+#             */
/*   Updated: 2022/12/07 17:10:30 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

	private:
		int _fixed_point;
		static const int _fractional;

	public:
		Fixed(void);
		Fixed(const int i);
		Fixed(const float f);
		Fixed(Fixed const &src);
		~Fixed(void);

		bool	operator>(Fixed const &rhs);
		bool	operator<(Fixed const &rhs);
		bool	operator>=(Fixed const &rhs);
		bool	operator<=(Fixed const &rhs);
		bool	operator==(Fixed const &rhs);
		bool	operator!=(Fixed const &rhs);

		Fixed	&operator=(Fixed const &rhs);
		Fixed	&operator+(Fixed const &rhs);
		Fixed	&operator-(Fixed const &rhs);
		Fixed	&operator/(Fixed const &rhs);
		Fixed	&operator*(Fixed const &rhs);

		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed	&min(Fixed &lhs, Fixed &rhs);
		static Fixed	&max(Fixed &lhs, Fixed &rhs);
		static const Fixed	&min(Fixed const &lhs, Fixed const &rhs);
		static const Fixed	&max(Fixed const &lhs, Fixed const &rhs);
};

std::ostream &operator<<(std::ostream &o ,Fixed const &rhs);

#endif
