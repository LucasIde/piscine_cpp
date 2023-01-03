#include "ShrubberyCreationForm.hpp"

int main() {
	std::string name = "worker";
	std::string form = "a32";
	try
	{
		Bureaucrat a(name, 1);
		AForm *b = new ShrubberyCreationForm();
		std::cout << a << std::endl << b <<std::endl;
		a.signForm(*b);
		std::cout << std::endl << b <<std::endl;
		a.signForm(*b);
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat a;
		AForm *b = new ShrubberyCreationForm();
		std::cout << a << std::endl << b <<std::endl;
		a.signForm(*b);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
