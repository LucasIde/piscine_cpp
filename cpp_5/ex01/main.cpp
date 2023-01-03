#include "Form.hpp"

int main() {
	std::string name = "worker";
	std::string form = "a32";
	try
	{
		Bureaucrat a(name, 1);
		Form b;
		std::cout << a << std::endl << b <<std::endl;
		a.signForm(b);
		std::cout << std::endl << b <<std::endl;
		a.signForm(b);
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat a;
		Form b(form, 140, 140);
		std::cout << a << std::endl << b <<std::endl;
		a.signForm(b);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
