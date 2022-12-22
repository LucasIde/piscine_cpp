/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:53:58 by lide              #+#    #+#             */
/*   Updated: 2022/12/22 18:18:51 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int		main(void) //my test
{
	std::cout << "	-Test Brain with Cat and Dog-" << std::endl;
	std::cout << "	-Constructor-" << std::endl;
	Dog		Snoopy;
	Dog		Snoopy_b(Snoopy);
	Dog		Noisette;

	Cat		Felix;
	Cat		Felix_b(Felix);
	Cat		Princesse;
	std::cout << std::endl;

	std::cout << "	-set_idea Felix-" << std::endl;
	Felix.set_idea("I'm hungry");
	Felix.set_idea("I'll cook.");
	Felix.set_idea("I can cook an omellette.");
	Felix.set_idea("With meat.");
	Felix.set_idea("with mushroom.");
	Felix.set_idea("With chocolate!");
	for (int i = 0; i < 7; i++)
	{
		std::cout << Felix.get_idea(i) << std::endl;
		std::cout << Felix_b.get_idea(i) << std::endl;
		std::cout << Princesse.get_idea(i) << std::endl;
		std::cout << "---------------------" << std::endl;
	}
	std::cout << std::endl;

	std::cout << "	-operator = + set_idea Princesse-" << std::endl;
	Princesse = Felix;
	Princesse.set_idea("I hate too much!");
	for (int i = 0; i < 7; i++)
	{
		std::cout << Felix.get_idea(i) << std::endl;
		std::cout << Felix_b.get_idea(i) << std::endl;
		std::cout << Princesse.get_idea(i) << std::endl;
		std::cout << "---------------------" << std::endl;
	}
	std::cout << std::endl;

	std::cout << "	-set_idea Snoopy-" << std::endl;
	Snoopy.set_idea("I'm hungry");
	Snoopy.set_idea("I'll cook.");
	Snoopy.set_idea("I can cook an omellette.");
	Snoopy.set_idea("With meat.");
	Snoopy.set_idea("with mushroom.");
	Snoopy.set_idea("With chocolate!");
	for (int i = 0; i < 7; i++)
	{
		std::cout << Snoopy.get_idea(i) << std::endl;
		std::cout << Snoopy_b.get_idea(i) << std::endl;
		std::cout << Noisette.get_idea(i) << std::endl;
		std::cout << "---------------------" << std::endl;
	}
	std::cout << std::endl;

	std::cout << "	-operator = + set_idea Noisette-" << std::endl;
	Noisette = Snoopy;
	Noisette.set_idea("I hate too much!");
	for (int i = 0; i < 7; i++)
	{
		std::cout << Snoopy.get_idea(i) << std::endl;
		std::cout << Snoopy_b.get_idea(i) << std::endl;
		std::cout << Noisette.get_idea(i) << std::endl;
		std::cout << "---------------------" << std::endl;
	}
	std::cout << std::endl;

	std::cout << "	-Test ask in the subject-" << std::endl;
	Animal	*compagnie[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			compagnie[i] = new Cat();
		else
			compagnie[i] = new Dog();
	}

	for (int i = 0; i < 10; i++)
	{
		delete compagnie[i];
	}

	Dog		*Doug = new Dog();
	Dog		Milou;

	Doug->set_idea("Bonjour, je m'appelle Doug!");
	Doug->set_idea("Et je vous aime!");
	Doug->set_idea("Mon maitre et bon et intelligent.");

	Milou = *Doug;
	delete Doug;
	for (size_t i = 0; i < 4; i++)
	{
		std::cout << Milou.get_idea(i) << std::endl;
	}

	return 0;
}



// int main() {
// 	const Animal *array[4];

// 	for (int i = 0; i < 4; i++)
// 	{
// 		if (i < 2)
// 			array[i] = new Dog();
// 		else
// 			array[i] = new Cat();
// 	}
// 	std::cout << std::endl;
// 	for (int i = 0; i < 4; i++)
// 		std::cout << array[i]->getType() << std::endl;
// 	std::cout << std::endl;
// 	for (int i = 0; i < 4; i++)
// 		array[i]->makeSound();
// 	std::cout << std::endl;
// 	for (int i = 0; i < 4; i++)
// 		delete array[i];
// 	return (0);
// }

// int main()
// {
// const Animal* j = new Dog();
// Cat* i = new Cat();
// std::string h = "hungry";
// std::cout << i->getType() << " " << std::endl;
// std::cout << j->getType() << " " << std::endl;

// i->set_ideas(h);
// std::cout << i->get_idea(0) << std::endl;
// std::cout << i->get_idea(99) << std::endl;

// delete j;
// delete i;

// return 0;
// }
