/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:21:54 by lide              #+#    #+#             */
/*   Updated: 2022/10/07 17:11:57 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//////////constructor//////////

Fixed::Fixed(void) : fixed_point(0){
	return;
}

Fixed::Fixed(const int i) {
	this->fixed_point = i << 8;
	return;
}

Fixed::Fixed(const float f) {
	this->fixed_point = (int)roundf(f * (1 << 8));
}

Fixed::Fixed(Fixed const &src) {
	*this = src;
	return;
}

//////////destructor//////////

Fixed::~Fixed(void) {
	return;
}

//////////Overload//////////

/////comparaison/////

bool	Fixed::operator>(Fixed const &rhs) {
	if (this->fixed_point > rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &rhs) {
	if (this->fixed_point < rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &rhs) {
	if (this->fixed_point >= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &rhs) {
	if (this->fixed_point <= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &rhs) {
	if (this->fixed_point == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &rhs) {
	if (this->fixed_point != rhs.getRawBits())
		return (true);
	return (false);
}

/////arithmetic/////

Fixed &Fixed::operator=(Fixed const &rhs) {
	this->fixed_point = rhs.getRawBits();
	return (*this);
}

Fixed &Fixed::operator+(Fixed const &rhs) {
	this->fixed_point += rhs.getRawBits();
	return (*this);
}

Fixed &Fixed::operator-(Fixed const &rhs) {
	this->fixed_point -= rhs.getRawBits();
	return (*this);
}

Fixed &Fixed::operator/(Fixed const &rhs) {
	this->fixed_point /= rhs.getRawBits();
	return (*this);
}

Fixed &Fixed::operator*(Fixed const &rhs) {
	this->fixed_point *= rhs.getRawBits();
	return (*this);
}

/////pre/post/////

Fixed	&Fixed::operator++() {
	this->fixed_point++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed tmp = *this;
	++*this;
	return (tmp);
}

Fixed	&Fixed::operator--() {
	this->fixed_point--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed tmp = *this;
	--*this;
	return (tmp);
}

//////////Set/Get//////////

int Fixed::getRawBits(void) const {
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw) {
	this->fixed_point = raw;
	return ;
}

//////////member function//////////

float Fixed::toFloat(void) const {
	return ((float)this->fixed_point / (1 << this->fractional));
}

int Fixed::toInt(void) const {
	return (this->fixed_point >> this->fractional);
}

/////////min/max/////////

Fixed	&Fixed::min(Fixed &lhs, Fixed &rhs) {
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

Fixed	&Fixed::max(Fixed &lhs, Fixed &rhs) {
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

const Fixed	&Fixed::min(Fixed const &lhs, Fixed const &rhs) {
	if (lhs.getRawBits() < rhs.getRawBits())
		return (lhs);
	return (rhs);
}

const Fixed	&Fixed::max(Fixed const &lhs, Fixed const &rhs) {
	if (lhs.getRawBits() < rhs.getRawBits())
		return (lhs);
	return (rhs);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs) {
	o << rhs.toFloat();
	return (o);
}

int const Fixed::fractional = 8;
