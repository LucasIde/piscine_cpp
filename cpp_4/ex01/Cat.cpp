/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:51:14 by lide              #+#    #+#             */
/*   Updated: 2022/12/21 18:49:06 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() {
	this->type = "cat";
	this->brain = new Brain();
	std::cout << "a Cat is born" << std::endl;
}

Cat::Cat(Cat const &src) {
	this->type = src.type;
	this->brain = new Brain();
	this->brain = src.brain;
	std::cout << "Cat Cloned" << std::endl;
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "a cat died" << std ::endl;
}

Cat &Cat::operator=(Cat const &rhs) {
	this->type = rhs.type;
	this->brain = rhs.brain;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "meeeeeeooow!!!" << std::endl;
}
