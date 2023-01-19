/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:47:08 by lide              #+#    #+#             */
/*   Updated: 2023/01/19 19:32:29 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate(void) {
	Base *ptr;
	srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		ptr = new A;
		std::cout << "generate object type A" << std::endl;
	}
	else if (i == 1)
	{
		ptr = new B;
		std::cout << "generate object type B" << std::endl;
	}
	else
	{
		ptr = new C;
		std::cout << "generate object type C" << std::endl;
	}
	return (ptr);
}

void	identify(Base* p) {
	A *ptr1;
	B *ptr2;
	C *ptr3;

	if ((ptr1 = dynamic_cast<A *>(p)))
		std::cout << "Object type is \'A\'" << std::endl;
	else if ((ptr2 = dynamic_cast<B *>(p)))
		std::cout << "Object type is \'B\'" << std::endl;
	else
		if ((ptr3 = dynamic_cast<C *>(p)))
			std::cout << "Object type is \'C\'" << std::endl;
}

void	identify(Base& p) {
	A ptr1;
	B ptr2;
	C ptr3;

	try {
		ptr1 = dynamic_cast<A &>(p);
		std::cout << "Object type is \'A\'" << std::endl;
		return;
	}
	catch (std::bad_cast &bc) {
	}
	try {
		ptr2 = dynamic_cast<B &>(p);
		std::cout << "Object type is \'B\'" << std::endl;
		return;
	}
	catch (std::bad_cast &bc) {
	}
	try {
		ptr3 = dynamic_cast<C &>(p);
		std::cout << "Object type is \'C\'" << std::endl;
		return;
	}
	catch (std::bad_cast &bc) {
	}
}

int main () {
	Base *base = generate();
	identify(base);
	identify(*base);
	delete base;
	return (0);
}
