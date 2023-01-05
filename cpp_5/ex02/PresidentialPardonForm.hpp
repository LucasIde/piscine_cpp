
#ifndef PRESIDENTIALPARDONFORM_HPP
 #define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		~PresidentialPardonForm();

		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

		virtual void execute(Bureaucrat const &executor) const;
};

#endif
