/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:17:22 by lide              #+#    #+#             */
/*   Updated: 2022/12/20 18:07:32 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "an Animal has born" << std::endl;
}

Animal::Animal(Animal const &src) : type(src.type) {
	std::cout << "an Animal has been cloned" << std::endl;
}

Animal::~Animal() {
	std::cout << "an Animal died" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs) {
	this->type = rhs.type;
	return (*this);
}

void Animal::makeSound() const{
	std::cout << "Animal noise" << std::endl;
}

const std::string &Animal::getType() const {
	return (this->type);
}
