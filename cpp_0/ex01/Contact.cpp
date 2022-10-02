/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:43:36 by lide              #+#    #+#             */
/*   Updated: 2022/10/02 23:06:50 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void Contact::setFirstName(std::string str) {
	this->first_name = str;
	return ;
}

void Contact::setLastName(std::string str) {
	this->last_name = str;
	return ;
}

void Contact::setNickname(std::string str) {
	this->nickname = str;
	return ;
}

void Contact::setNumber(std::string str) {
	this->number = str;
	return ;
}

void Contact::setSecret(std::string str) {
	this->secret = str;
	return ;
}

std::string Contact::getFirstName(void) const {
	return (this->first_name);
}

std::string Contact::getLastName(void) const {
	return (this->last_name);
}

std::string Contact::getNickname(void) const {
	return (this->nickname);
}

std::string Contact::getNumber(void) const {
	return (this->number);
}

std::string Contact::getSecret(void) const {
	return (this->secret);
}
