#include "../includes/RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm &RobotomyRequestForm:: operator=(const RobotomyRequestForm &rqf)
{
	if (this != &rqf)
		this->_target = rqf._target;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (AForm::getSigned() == false)
		throw;
	if (executor.getGrade() > AForm::getExecGrade())
		throw;
	int random = rand() % 2;
	if (random == 0) {
		std::cout<< _target << " has been robotomized successfully!\n";
	} else {
		std::cout<< _target << " has not been robotomized!\n";
	}
}