/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:25:26 by lide              #+#    #+#             */
/*   Updated: 2023/01/03 19:35:17 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default Aform"), _target(""), _status(0), _sign(150), _execute(150) {}

AForm::AForm(const std::string &name, const std::string &target, int sign, int execute) : _name(name), _target(target), _status(0), _sign(sign), _execute(execute) {
	if (sign < 1 || execute < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (sign > 150 || execute > 150)
		throw (Bureaucrat::GradeTooLowException());
}

AForm::AForm(AForm const &rhs) : _name(rhs._name), _target(rhs._target), _status(rhs._status), _sign(rhs._sign), _execute(rhs._execute) {}

AForm::~AForm() {}

AForm &AForm::operator=(AForm const &rhs) {
	this->_status = rhs._status;
	return (*this);
}

void AForm::beSigned(Bureaucrat const &rhs) {
	if (this->_sign < rhs.getGrade())
		throw (AForm::SignGradeTooLowException());
	this->_status = 1;
}

const std::string &AForm::getName() const {
	return (this->_name);
}

const std::string &AForm::getTarget() const {
	return (this->_target);
}

bool AForm::getStatus() const {
	return (this->_status);
}

int AForm::getSign() const {
	return (this->_sign);
}

int AForm::getExecute() const {
	return (this->_execute);
}

const char *AForm::SignGradeTooLowException::what() const throw() {
	return ("Bureaucrat don't have the grade to sign this form.");
}

const char *AForm::ExecGradeTooLowException::what() const throw() {
	return ("Bureaucrat don't have the grade to execute this form");
}

const char *AForm::FormUnsigned::what() const throw() {
	return ("the form can't be execute, he is unsigned.");
}

std::ostream &operator<<(std::ostream &o, AForm const &rhs) {
	o << rhs.getName() << " status is " << rhs.getStatus() << "." << std::endl;
	o << "Grade " << rhs.getSign() << " is required to sign the Aform."<< std::endl;
	o << "Grade " << rhs.getExecute() << " is required to execute the Aform."<< std::endl;
	return (o);
}
