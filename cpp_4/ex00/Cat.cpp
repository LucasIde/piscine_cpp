/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:51:14 by lide              #+#    #+#             */
/*   Updated: 2023/01/17 17:52:44 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() {
	this->type = "cat";
	std::cout << "a Cat is born" << std::endl;
}

Cat::Cat(Cat const &src) : Animal() {
	this->type = src.type;
	std::cout << "Cat Cloned" << std::endl;
}

Cat::~Cat() {
	std::cout << "a cat died" << std ::endl;
}

Cat &Cat::operator=(Cat const &rhs) {
	this->type = rhs.type;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "meeeeeeooow!!!" << std::endl;
}
