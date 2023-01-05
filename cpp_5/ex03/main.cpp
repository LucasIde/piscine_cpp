#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	std::string name = "worker";
	std::string form = "a32";
	AForm *b = new ShrubberyCreationForm("forest");
	AForm *c = new RobotomyRequestForm("claptrap");
	AForm *d = new PresidentialPardonForm("cassandre");
	AForm *error = new ShrubberyCreationForm("forest");
	AForm *error2 = new PresidentialPardonForm("cassandre");
	try
	{
		Bureaucrat a(name, 1);
		std::cout << a << std::endl << *b <<std::endl << *c << std::endl << *d << std::endl;
		a.signForm(*b);
		a.signForm(*c);
		a.signForm(*d);
		std::cout << std::endl << *b <<std::endl << *c << std::endl << *d << std::endl;
		std::cout << std::endl;
		a.executeForm(*b);
		std::cout << std::endl;
		a.executeForm(*c);
		std::cout << std::endl;
		a.executeForm(*d);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat a;
		std::cout << a << std::endl << *error <<std::endl;
		a.executeForm(*error);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat a(name, 1);
		std::cout << a << std::endl << *error2 <<std::endl;
		a.executeForm(*error2);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete b;
	delete c;
	delete d;
	delete error;
	delete error2;
}
