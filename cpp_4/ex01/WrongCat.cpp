/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:51:14 by lide              #+#    #+#             */
/*   Updated: 2022/12/20 18:11:05 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << "a WrongCat is born" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal() {
	this->type = src.type;
	std::cout << "WrongCat Cloned" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "a WrongCat died" << std ::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs) {
	this->type = rhs.type;
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "strange meeeeeeooow!!!" << std::endl;
}
