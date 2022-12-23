/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:39:32 by lide              #+#    #+#             */
/*   Updated: 2022/12/23 17:32:33 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "a Dog is born" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const &src) {
	this->brain = new Brain();
	*this = src;
	std::cout << "Dog Cloned" << std::endl;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "a Dog died" << std ::endl;
}

Dog &Dog::operator=(Dog const &rhs) {
	this->type = rhs.type;
	*this->brain = *rhs.brain;
	return (*this);
}

std::string &Dog::getIdea(int i) {
	return (this->brain->getIdea(i));
}

void Dog::setIdea(const std::string &idea) {
	this->brain->setIdea(idea);
}

void Dog::makeSound() const {
	std::cout << "woooooof!!!" << std::endl;
}
