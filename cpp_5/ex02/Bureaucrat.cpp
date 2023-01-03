/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:39:27 by lide              #+#    #+#             */
/*   Updated: 2023/01/03 21:00:26 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string &name, int grade) : _name(name) {
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs) : _name(rhs._name), _grade(rhs._grade) {
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
	this->_grade = rhs._grade;
	return (*this);
}

void	Bureaucrat::promotion() {
	if (this->_grade == 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade--;
}

void	Bureaucrat::demotion() {
	if (this->_grade == 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade++;
}

const std::string &Bureaucrat::getName() const {
	return (this->_name);
}

int Bureaucrat::getGrade() const {
	return (this->_grade);
}

void Bureaucrat::signForm(AForm &rhs) const {
	if (rhs.getStatus() == 1)
		std::cout << this->_name << " couldn\'t sign " << rhs.getName() << " because it's already sign" << std::endl;
	else
	{
		rhs.beSigned(*this);
		std::cout << this->_name << " signed " << rhs.getName() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form) {
	form.execute(*this);
	std::cout << this->_name << " executed " << form.getName() << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("grade can't be higher than 1.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("grade can't be lower than 150.");
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return (o);
}
