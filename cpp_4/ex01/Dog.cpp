/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:39:32 by lide              #+#    #+#             */
/*   Updated: 2022/12/22 18:21:38 by lide             ###   ########.fr       */
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
	// delete this->brain;
	this->brain = rhs.brain;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "woooooof!!!" << std::endl;
}

std::string &Dog::get_idea(int i) const {
	return (this->brain->ideas[i]);
}

void	Dog::set_idea(std::string idea) {
	for (int i = 0; i < 100; i++)
		if (this->brain->ideas[i].empty())
		{
			this->brain->ideas[i] = idea;
			return ;
		}
	std::cout << "it's not possible to have more than 100 ideas" << std::endl;
}
