/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:17:22 by lide              #+#    #+#             */
/*   Updated: 2022/12/20 18:07:32 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "a WrongAnimal has born" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) : type(src.type) {
	std::cout << "a WrongAnimal has been cloned" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "a WrongAnimal died" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {
	this->type = rhs.type;
	return (*this);
}

void WrongAnimal::makeSound() const{
	std::cout << "Strange noise" << std::endl;
}

const std::string &WrongAnimal::getType() const {
	return (this->type);
}
