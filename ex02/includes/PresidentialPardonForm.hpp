#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm: public AForm
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm(std::string target) : _target(target) { };
		PresidentialPardonForm() : _target("default") {};
		PresidentialPardonForm (const PresidentialPardonForm &ppf) : _target(ppf._target) {};
		PresidentialPardonForm & operator=(const PresidentialPardonForm &ppf);
		~PresidentialPardonForm() {};

		std::string getName() { return AForm::getName();};
		std::string getTarget() { return _target; };
		void execute(const Bureaucrat &executor) const;
		void makePardon();
};

#endif