#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

class Intern
{
	private:
		AForm *makePresidentialPardonForm(std::string target);
		AForm *makeRobotomyRequestForm(std::string target);
		AForm *makeShrubberyCreationForm(std::string target);
	public:
		Intern() {};
		Intern(const Intern &i) {*this = i;};
		Intern &operator=(const Intern &i) { (void)i; return *this; };
		~Intern() {};
		
		AForm *makeForm(const std::string &FormName, const std::string &target);
};

#endif