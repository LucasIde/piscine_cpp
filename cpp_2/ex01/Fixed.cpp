/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:21:54 by lide              #+#    #+#             */
/*   Updated: 2022/10/07 14:23:42 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : fixed_point(0){
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int i) {
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = i << 8;
	return;
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = (int)roundf(f * (1 << 8));
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &Fixed::operator=(Fixed const &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point = rhs.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs) {
	o << rhs.toFloat();
	return (o);
}

int Fixed::getRawBits(void) const {
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw) {
	this->fixed_point = raw;
	return ;
}

float Fixed::toFloat(void) const {
	return ((float)this->fixed_point / (1 << this->fractional));
}

int Fixed::toInt(void) const {
	return (this->fixed_point >> this->fractional);
}

int const Fixed::fractional = 8;
