#include "../includes/Intern.hpp"
#include <string>


AForm *Intern::makePresidentialPardonForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeRobotomyRequestForm(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm *Intern::makeShrubberyCreationForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(const std::string &FormName,const std::string &target)
{
	std::string names[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	typedef AForm* (Intern::*FuncPtr)(std::string target);

	FuncPtr functions[3];

	functions[0] = &Intern::makePresidentialPardonForm;
	functions[1] = &Intern::makeRobotomyRequestForm;
	functions[2] = &Intern::makeShrubberyCreationForm;
	for (int i = 0; i < 3; i++)
	{
		if (names[i].compare(FormName) == 0)
		{
			std::cout << "Intern creates " << FormName << std::endl;
			return (this->*functions[i])(target);
		}
	}
	std::cerr << "Error: form " << FormName << " does not exist!" << std::endl;
	return NULL;
}