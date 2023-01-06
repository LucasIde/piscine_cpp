
#ifndef INTERN_HPP
 #define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		AForm *makeShrubberyCreationForm(const std::string &target);
		AForm *makeRobotomyRequestForm(const std::string &target);
		AForm *makePresidentialPardonForm(const std::string &target);

	public:
		Intern();
		Intern(Intern const &src);
		~Intern();

		Intern &operator=(Intern const &rhs);

		AForm *makeForm(const std::string &name, const std::string &target);
};

#endif
