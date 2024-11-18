#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm & ppf) {
	if (this != &ppf)
	{
		this->_target = ppf._target;
	}
	return *this;
}

void PresidentialPardonForm::makePardon() const
{
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;

}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (AForm::getSigned() == false)
		throw;
	if (executor.getGrade() > AForm::getExecGrade())
		throw ;
	makePardon();
}