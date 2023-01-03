#include "Bureaucrat.hpp"

int main() {
	std::string name = "worker";
	try
	{
		Bureaucrat a(name, 1);
		Bureaucrat b;
		std::cout << a << std::endl << b <<std::endl;
		a.demotion();
		b.promotion();
		std::cout << a << std::endl << b <<std::endl;
		a.promotion();
		a.promotion();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b;
		b.demotion();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
