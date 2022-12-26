/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:51:14 by lide              #+#    #+#             */
/*   Updated: 2022/12/23 17:21:32 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() {
	std::cout << "a Cat is born" << std::endl;
	this->type = "cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const &src) {
	this->brain = new Brain();
	*this = src;
	std::cout << "Cat Cloned" << std::endl;
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "a cat died" << std ::endl;
}

Cat &Cat::operator=(Cat const &rhs) {
	this->type = rhs.type;
	*this->brain = *rhs.brain;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "meeeeeeooow!!!" << std::endl;
}

std::string &Cat::getIdea(int i) {
	return (this->brain->getIdea(i));
}

void Cat::setIdea(const std::string &idea) {
	this->brain->setIdea(idea);
}
