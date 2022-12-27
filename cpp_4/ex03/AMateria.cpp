/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:26:21 by lide              #+#    #+#             */
/*   Updated: 2022/12/27 17:28:15 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(AMateria const &rhs) : _type(rhs._type) {}

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::~AMateria() {}

AMateria &AMateria::operator=(AMateria const &rhs) {
	this->_type = rhs._type;
	return (*this);
}

std::string const &AMateria::getType() const {
	return (this->_type);
}
