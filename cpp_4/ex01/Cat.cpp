/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:51:14 by lide              #+#    #+#             */
/*   Updated: 2022/12/22 18:20:49 by lide             ###   ########.fr       */
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
	// delete this->brain;
	this->brain = rhs.brain;//peut etre leak check egal
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "meeeeeeooow!!!" << std::endl;
}

std::string &Cat::get_idea(int i) const {
	return (this->brain->ideas[i]);
}

void	Cat::set_idea(std::string idea) {
	for (int i = 0; i < 100; i++)
		if (this->brain->ideas[i].empty())
		{
			this->brain->ideas[i] = idea;
			return ;
		}
	std::cout << "it's not possible to have more than 100 ideas" << std::endl;
}
