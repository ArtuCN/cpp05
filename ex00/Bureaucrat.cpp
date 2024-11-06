#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name){
    _
    
}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b) {
    if (this != &b) {
        _grade = b._grade;
    }
    return *this;
}
