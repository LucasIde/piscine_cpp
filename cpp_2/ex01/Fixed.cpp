/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:21:54 by lide              #+#    #+#             */
/*   Updated: 2022/10/06 17:20:05 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : number_value(0){
	std::cout << "Default constructor called" << std::endl;
	return;
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
	this->number_value = rhs.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs) {
	o << rhs.getRawBits()
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->number_value);
}

void Fixed::setRawBits(int const raw) {
	this->number_value = raw;
	return ;
}

int const Fixed::fractional = 8;
