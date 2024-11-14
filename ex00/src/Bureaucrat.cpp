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

void Bureaucrat::incrementGrade(const unsigned int &num) {
    
    if (num < _grade)
        throw GradeTooHighException();
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


