
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", "", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs) : AForm("PresidentialPardonForm", rhs.getTarget(), 25, 5) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &) {
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->getExecute())
		throw (AForm::ExecGradeTooLowException());
	else if (this->getStatus() != 1)
		throw (AForm::FormUnsigned());
	else
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
