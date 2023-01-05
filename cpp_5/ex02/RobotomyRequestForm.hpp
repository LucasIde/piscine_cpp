
#ifndef ROBOTOMYREQUESTFORM_HPP
 #define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>

class RobotomyRequestForm : public AForm
{
	private:

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

		virtual void execute(Bureaucrat const &executor) const;
};

#endif
