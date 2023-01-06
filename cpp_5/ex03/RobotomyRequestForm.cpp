
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", "", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs) : AForm("RobotomyRequestForm", rhs.getTarget(), 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &) {
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->getExecute())
		throw (AForm::ExecGradeTooLowException());
	else if (this->getStatus() != 1)
		throw (AForm::FormUnsigned());
	else
	{
		std::cout << "some drilling noises" << std::endl;
		int i = rand() % 100;
		std::cout << i << std::endl;
		if (i < 50)
			std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
		else
			std::cout << "the robotomy of " << this->getTarget() << " failed" << std::endl;
	}
}
