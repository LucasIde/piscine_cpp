/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:26:42 by lide              #+#    #+#             */
/*   Updated: 2022/12/29 15:44:15 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : _type("ice") {}

Ice::Ice(Ice const &rhs) : _type("ice") {}

Ice::~Ice() {}

Ice &Ice::operator=(Ice const &rhs) {
	this->_type = rhs._type;//check si utile
	return (*this);
}

void Ice::use(ICharacter &target) {
	std::cout << "Ice : \"*shoots an ice bolt at " << target.getName() << "*\"" << std::endl;
}

Ice *Ice::clone() const {
	const AMateria *materia = new Ice;
	materia = this;
	return (this);
}
