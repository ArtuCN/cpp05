#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"

Form &Form::operator=(const Form &f)
{
	if (this != &f)
	{
		this->_signed = f._signed;
	}
	return *this;
}

void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() < _gradeToSign)
    {
        _signed = true;
        return;
    }
    throw gradeTooLowException();
}

