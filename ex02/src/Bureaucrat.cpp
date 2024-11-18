#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade) {
    std::cout<< name <<" Bureaucrat created!\n";
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

void Bureaucrat::incrementGrade(const unsigned int &num) {
    
    _grade -= num;
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
}

void Bureaucrat::decrementGrade(const unsigned int &num) {
    _grade += num;
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
}

void Bureaucrat::signAForm(AForm &AForm)
{
    if (AForm.getSigned() == true)
    {
        std::cout<< getName() << " signed " << AForm.getName() << std::endl;
    }
    else
    {
        std::cout<< getName() << " couldn't sign " << AForm.getName() << " because grade is too low\n";
    }
        
}

