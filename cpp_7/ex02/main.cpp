/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:21:23 by lide              #+#    #+#             */
/*   Updated: 2023/01/24 18:13:45 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
{
	Array<int> a(5);
	Array<int> empty;

	std::cout << "a[2] : " << a[2] << std::endl;
	a[2] = 5;
	std::cout << "I can change the value of a[2] : " << a[2] << std::endl;
	Array<int> b(a);
	std::cout << "If I make a copy of a, the value b[2] is the same : " <<  b[2] << std::endl;
	b[2] = 19;
	std::cout << "But if I change b[2] : " <<  b[2] << std::endl;
	std::cout << "It doesn't change a[2] : " <<  a[2] << std::endl;
	a = b;
	std::cout << "The '=' operator can change a : " <<  a[2] << std::endl;
	std::cout << "The size of a is " <<  a.size() << std::endl;
	std::cout << "The size of b is " <<  b.size() << std::endl;
	std::cout << "The size of empty is " <<  empty.size() << std::endl;
	std::cout << "I can't access out of the array" << std::endl;
	try
	{
		std::cout << a[5] << std::endl;
		std::cout << "Nervermind." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "You see" << std::endl;
	}
}
std::cout << "--------------" << std::endl;
{
	std::cout << "This work also with float" << std::endl;
	Array<float> a(5);
	Array<float> empty;

	std::cout << "a[2] : " << a[2] << std::endl;
	a[2] = 5.2;
	std::cout << "I can change the value of a[2] : " << a[2] << std::endl;
	Array<float> b(a);
	std::cout << "If I make a copy of a, the value b[2] is the same : " <<  b[2] << std::endl;
	b[2] = 19.42;
	std::cout << "But if I change b[2] : " <<  b[2] << std::endl;
	std::cout << "It doesn't change a[2] : " <<  a[2] << std::endl;
	a = b;
	std::cout << "The '=' operator can change a : " <<  a[2] << std::endl;
	std::cout << "The size of a is " <<  a.size() << std::endl;
	std::cout << "The size of b is " <<  b.size() << std::endl;
	std::cout << "The size of empty is " <<  empty.size() << std::endl;
	std::cout << "I can't access out of the array" << std::endl;
	try
	{
		std::cout << a[5] << std::endl;
		std::cout << "Nervermind." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "You see" << std::endl;
	}
}
}

// #include <iostream>
// #include <Array.hpp>

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
// 		std::cout << std::endl;
//         numbers[-2] = 0;
// 		std::cout << std::endl;
// 		std::cout << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
// 		std::cout << "i = " << i << " |  numbers is " << numbers[i] << std::endl;
//     }
//     delete [] mirror;//
//     return 0;
// }
