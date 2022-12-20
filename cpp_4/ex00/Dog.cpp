/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:39:32 by lide              #+#    #+#             */
/*   Updated: 2022/12/20 18:11:52 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "a Dog is born" << std::endl;
}

Dog::Dog(Dog const &src) {
	this->type = src.type;
	std::cout << "Dog Cloned" << std::endl;
}

Dog::~Dog() {
	std::cout << "a Dog died" << std ::endl;
}

Dog &Dog::operator=(Dog const &rhs) {
	this->type = rhs.type;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "woooooof!!!" << std::endl;
}
