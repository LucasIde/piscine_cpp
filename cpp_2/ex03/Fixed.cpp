/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:21:54 by lide              #+#    #+#             */
/*   Updated: 2022/12/13 13:04:47 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//////////constructor//////////

Fixed::Fixed(void) : _fixed_point(0){
	return;
}

Fixed::Fixed(const int i) {
	this->_fixed_point = i << 8;
	return;
}

Fixed::Fixed(const float f) {
	this->_fixed_point = (int)roundf(f * (1 << 8));
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

bool	Fixed::operator>(Fixed const &rhs) const{
	if (this->_fixed_point > rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &rhs) const{
	if (this->_fixed_point < rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &rhs) const{
	if (this->_fixed_point >= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &rhs) const{
	if (this->_fixed_point <= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &rhs) const{
	if (this->_fixed_point == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &rhs) const{
	if (this->_fixed_point != rhs.getRawBits())
		return (true);
	return (false);
}

/////arithmetic/////

Fixed &Fixed::operator=(Fixed const &rhs) {
	this->_fixed_point = rhs.getRawBits();
	return (*this);
}

Fixed &Fixed::operator+(Fixed const &rhs) {
	*this = Fixed(this->toFloat() + rhs.toFloat());;
	return (*this);
}

Fixed &Fixed::operator-(Fixed const &rhs) {
	*this = Fixed(this->toFloat() - rhs.toFloat());;
	return (*this);
}

Fixed &Fixed::operator/(Fixed const &rhs) {
	*this = Fixed(this->toFloat() / rhs.toFloat());;
	return (*this);
}

Fixed &Fixed::operator*(Fixed const &rhs) {
	*this = Fixed(this->toFloat() * rhs.toFloat());;
	return (*this);
}

/////pre/post/////

Fixed	&Fixed::operator++() {
	this->_fixed_point++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed tmp = *this;
	++*this;
	return (tmp);
}

Fixed	&Fixed::operator--() {
	this->_fixed_point--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed tmp = *this;
	--*this;
	return (tmp);
}

//////////Set/Get//////////

int Fixed::getRawBits(void) const {
	return (this->_fixed_point);
}

void Fixed::setRawBits(int const raw) {
	this->_fixed_point = raw;
	return ;
}

//////////member function//////////

float Fixed::toFloat(void) const {
	return ((float)this->_fixed_point / (1 << this->_fractional));
}

int Fixed::toInt(void) const {
	return (this->_fixed_point >> this->_fractional);
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
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	return (rhs);
}

/////////insertion operator/////////

std::ostream &operator<<(std::ostream &o, Fixed const &rhs) {
	o << rhs.toFloat();
	return (o);
}

/////////static initialization/////////

int const Fixed::_fractional = 8;
