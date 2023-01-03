/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:25:26 by lide              #+#    #+#             */
/*   Updated: 2023/01/03 19:35:17 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default form"), _status(0), _sign(150), _execute(150) {}

Form::Form(std::string &name, int sign, int execute) : _name(name), _status(0), _sign(sign), _execute(execute) {
	if (sign < 1 || execute < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (sign > 150 || execute > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Form::Form(Form const &rhs) : _name(rhs._name), _status(rhs._status), _sign(rhs._sign), _execute(rhs._execute) {}

Form::~Form() {}

Form &Form::operator=(Form const &rhs) {
	this->_status = rhs._status;
	return (*this);
}

void Form::beSigned(Bureaucrat const &rhs) {
	if (this->_sign < rhs.getGrade())
		throw (Form::GradeTooLowException());
	this->_status = 1;
}

const std::string &Form::getName() const {
	return (this->_name);
}

bool Form::getStatus() const {
	return (this->_status);
}

int Form::getSign() const {
	return (this->_sign);
}

int Form::getExecute() const {
	return (this->_execute);
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Bureaucrat don't have the grade to sign this form.");
}

std::ostream &operator<<(std::ostream &o, Form const &rhs) {
	o << rhs.getName() << " status is " << rhs.getStatus() << "." << std::endl;
	o << "Grade " << rhs.getSign() << " is required to sign the form."<< std::endl;
	o << "Grade " << rhs.getExecute() << " is required to execute the form."<< std::endl;
	return (o);
}
