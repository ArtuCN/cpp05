#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm: public AForm
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm() : AForm("Default", 25, 5), _target("default") {};
		PresidentialPardonForm(const std::string &target) : AForm("Default", 25, 5), _target(target) { };
		PresidentialPardonForm (const PresidentialPardonForm &ppf) : _target(ppf._target) {};
		PresidentialPardonForm & operator=(const PresidentialPardonForm &ppf);
		~PresidentialPardonForm() {};

		std::string getName() { return AForm::getName();};
		std::string getTarget() { return _target; };
		void execute(const Bureaucrat &executor) const;
		void makePardon()const;
};

#endif