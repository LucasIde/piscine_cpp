/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:53:58 by lide              #+#    #+#             */
/*   Updated: 2022/12/26 14:20:44 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	// A_Animal *animal = new A_Animal();
	Cat* i = new Cat();
	Cat* j = new Cat();
	i->setIdea("I'm hungry");
	*j = *i;
	std::cout << i->getIdea(0) << std::endl;
	std::cout << j->getIdea(0) << std::endl;
	i->setIdea("hello");
	std::cout << i->getIdea(1) << std::endl;
	std::cout << j->getIdea(1) << std::endl;

	delete i;
	delete j;

	std::cout << std::endl << std::endl;

	A_Animal *x[4];
	for (int i = 0; i < 4; i++) {
		if (i < 2)
			x[i] = new Dog();
		else
			x[i] = new Cat();
	}
	for (int i = 0; i < 4; i++) {
		x[i]->makeSound();
	}
	for (int i = 0; i < 4; i++) {
		delete x[i];
	}

	return 0;
}
