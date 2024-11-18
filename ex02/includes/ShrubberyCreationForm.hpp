#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <cstdlib> 

class ShrubberyCreationForm: public AForm
{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm() :  AForm("default", 145, 137) , _target("default") {};
		ShrubberyCreationForm(const std::string &target) :  AForm("default", 145, 137) , _target(target) {};
		ShrubberyCreationForm(const ShrubberyCreationForm &scf) : _target(scf._target) {};
		ShrubberyCreationForm &operator =(const ShrubberyCreationForm &scf);
		~ShrubberyCreationForm() {};

		void execute(Bureaucrat const & executor)const;
};


#endif