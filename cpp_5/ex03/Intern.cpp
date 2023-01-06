
#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &) {}

Intern::~Intern() {}

Intern &Intern::operator=(Intern const &) {
	return (*this);
}

AForm *Intern::makeShrubberyCreationForm(const std::string &target) {
	AForm *tmp = new ShrubberyCreationForm(target);
	return (tmp);
}

AForm *Intern::makeRobotomyRequestForm(const std::string &target) {
	AForm *tmp = new RobotomyRequestForm(target);
	return (tmp);
}

AForm *Intern::makePresidentialPardonForm(const std::string &target) {
	AForm *tmp = new PresidentialPardonForm(target);
	return (tmp);
}

AForm *Intern::makeForm(const std::string &name, const std::string &target) {
	std::string str[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm * (Intern::*ft[3])(const std::string &target) = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};
	Intern intern;
	AForm *form;

	for (int i = 0; i < 3; i++)
	{
		if (!name.compare(str[i]))
		{
			form = (intern.*ft[i])(target);
			std::cout << "Intern creates " << name << std::endl;
			return (form);
		}
	}
	std::cout << "this form doesn't exist" << std::endl;
	return (NULL);
}
