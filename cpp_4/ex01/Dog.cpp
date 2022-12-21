/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:39:32 by lide              #+#    #+#             */
/*   Updated: 2022/12/21 18:49:19 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "a Dog is born" << std::endl;
}

Dog::Dog(Dog const &src) {
	this->type = src.type;
	this->brain = new Brain();
	this->brain = src.brain;
	std::cout << "Dog Cloned" << std::endl;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "a Dog died" << std ::endl;
}

Dog &Dog::operator=(Dog const &rhs) {
	this->type = rhs.type;
	this->brain = rhs.brain;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "woooooof!!!" << std::endl;
}
