/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:17:22 by lide              #+#    #+#             */
/*   Updated: 2022/12/20 18:07:32 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"

A_Animal::A_Animal() : type("A_Animal") {
	std::cout << "an A_Animal has born" << std::endl;
}

A_Animal::A_Animal(A_Animal const &src) : type(src.type) {
	std::cout << "an A_Animal has been cloned" << std::endl;
}

A_Animal::~A_Animal() {
	std::cout << "an A_Animal died" << std::endl;
}

A_Animal &A_Animal::operator=(A_Animal const &rhs) {
	this->type = rhs.type;
	return (*this);
}

const std::string &A_Animal::getType() const {
	return (this->type);
}
