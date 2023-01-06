#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
	Intern intern;
	AForm *form = NULL;
	AForm *form2 = NULL;
	AForm *form3 = NULL;
	Bureaucrat a("worker", 1);

	try
	{
		form = intern.makeForm("robotomy request", "bot");
		if (form != NULL)
		{
			a.signForm(*form);
			a.executeForm(*form);
		}
		std::cout << std::endl;
		form2 = intern.makeForm("shrubbery creation", "forest");
		if (form2 != NULL)
		{
			a.signForm(*form2);
			a.executeForm(*form2);
		}
		std::cout << std::endl;
		form3 = intern.makeForm("presidential pardon", "bot");
		if (form3 != NULL)
		{
			a.signForm(*form3);
			a.executeForm(*form3);
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete form;
	delete form2;
	delete form3;
}
