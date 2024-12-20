#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"

AForm &AForm::operator=(const AForm &f)
{
	if (this != &f)
	{
		_signed = f._signed;
	}
	return *this;
}

void AForm::beSigned(const Bureaucrat &b)
{
	std::cout<< b.getName() << " is trying to sign " << _name << "\n";
	if (b.getGrade() < _gradeToSign)
    {
        _signed = true;
        return;
    }
    throw gradeTooLowException();
}

const char *AForm::gradeTooHighException::what() const throw()
{
    return "Grade too high!";
}

const char *AForm::gradeTooLowException::what() const throw()
{
    return "Grade too low!";
}

std::ostream& operator<<(std::ostream &os, const AForm& f)
{
	os << f.getName() << " grade to sign: "<< f.getGrade() << " grade to exec: "<< f.getExecGrade()<< " bool is signed: "<< f.getSigned()<< "\n";
	return os;
}
