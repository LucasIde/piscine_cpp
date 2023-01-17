/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:53:58 by lide              #+#    #+#             */
/*   Updated: 2023/01/17 17:57:58 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const WrongAnimal* y = new WrongAnimal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* x = new WrongCat();
std::cout << x->getType() << std::endl;
std::cout << i->getType() << std::endl;
std::cout << j->getType() << std::endl;
std::cout << y->getType() << std::endl;
std::cout << meta->getType() << std::endl;
x->makeSound();
i->makeSound();
j->makeSound();
y->makeSound();
meta->makeSound();

delete meta;
delete j;
delete i;
delete x;
delete y;

return 0;
}
