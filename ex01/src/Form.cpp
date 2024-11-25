#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"
#include <ostream>

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
	std::cout<< b.getName() << " is trying to sign " << _name << "\n";
	if (b.getGrade() < _gradeToSign)
    {
        _signed = true;
        return;
    }
    throw gradeTooLowException();
}

const char *Form::gradeTooHighException::what() const throw()
{
    return "Grade too high!";
}

const char *Form::gradeTooLowException::what() const throw()
{
    return "Grade too low!";
}

std::ostream& operator<<(std::ostream &os, const Form& f)
{
	os << f.getName() << " grade to sign: "<< f.getGrade() << " grade to exec: "<< f.getExecGrade()<< " bool is signed: "<< f.getSigned()<< "\n";
	return os;
}
