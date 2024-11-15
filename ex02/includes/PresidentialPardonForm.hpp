#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm: public AForm
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm(std::string name) : AForm(name, 25, 5) { std::cout<< name <<" constructor called\n"; };
		PresidentialPardonForm() : AForm("Default", 25, 5) { std::cout<< "PresidentialPardonForm constructor called\n"; }
		PresidentialPardonForm(const PresidentialPardonForm &ppf) :  AForm(ppf){};
		PresidentialPardonForm& operator=(const PresidentialPardonForm &ppf);
		~PresidentialPardonForm() {};

		std::string getName() { return AForm::getName();};
		std::string getTarget() { return _target; };
		void execute(const Bureaucrat &executor) const;
		void makePardon();
};

#endif