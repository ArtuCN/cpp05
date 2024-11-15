#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm &PresidentialPardonForm:: operator=(const PresidentialPardonForm & ppf) {
	if (this != &ppf)
	{
		this->_target = ppf._target;
	}
	return *this;
}

void PresidentialPardonForm::Execute()
{

}