#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade) {
    std::cout<<"Bureaucrat created!\n";
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b) {
    if (this != &b) {
        _grade = b._grade;
    }
    return *this;
}

void Bureaucrat::incrementGrade(const int &num) {
    
    _grade -= num;
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
}

void Bureaucrat::decrementGrade(const int &num) {
    _grade += num;
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream&os, const Bureaucrat &b)
{
	os << b.getName() << " grade: "<< b.getGrade()<< "\n";
	return os;
}
