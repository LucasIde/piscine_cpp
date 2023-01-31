/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:47:02 by lide              #+#    #+#             */
/*   Updated: 2023/01/31 21:43:16 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {this->_max = 0;}

Span::Span(unsigned int N) {
	this->_max = N;
}

Span::Span(Span const &rhs) {
	*this = rhs;
}

Span::~Span() {}

Span &Span::operator=(Span const &rhs) {
	this->_span = rhs._span;
	this->_max = rhs._max;
	return (*this);
}

void Span::addNumber(int i) {
	if (std::distance(this->_span.begin(), this->_span.end()) >= this->_max)
		throw(Span::Outofspace());
	this->_span.push_back(i);
}

void Span::addmultipleNumbers(std::list<int>::iterator &begin, std::list<int>::iterator &end) {
	while (begin != end)
	{
		this->addNumber(*begin);
		begin++;
	}
}

unsigned int Span::shortestSpan() {
	unsigned int len = std::distance(this->_span.begin(), this->_span.end());
	if (len < 2)
		throw(Span::NoSpan());

	std::list<int>::iterator lst = this->_span.begin();
	std::list<int>::iterator lst2 = lst;
	unsigned int tmp;
	unsigned int nb = 4294967295;

	lst2++;
	for (unsigned int i = 0; i < len - 1; i++)
	{
		tmp = abs(*lst - *lst2);
		if (nb > tmp)
			nb = tmp;
		lst++;
		lst2++;
	}
	return (nb);
}

unsigned int Span::longestSpan() {
	unsigned int len = std::distance(this->_span.begin(), this->_span.end());
	if (len < 2)
		throw(Span::NoSpan());

	std::list<int>::iterator lst = this->_span.begin();
	std::list<int>::iterator lst2 = lst;
	unsigned int tmp;
	unsigned int nb = 0;

	lst2++;
	for (unsigned int i = 0; i < len - 1; i++)
	{
		tmp = abs(*lst - *lst2);
		if (nb < tmp)
			nb = tmp;
		lst++;
		lst2++;
	}
	return (nb);
}

std::list<int> Span::getspan() const {
	return (this->_span);
}

const char *Span::NoSpan::what() const throw() {
	return ("no span can be found");
}

const char *Span::Outofspace::what() const throw() {
	return ("number can\'t be stock, no space left in the list");
}
