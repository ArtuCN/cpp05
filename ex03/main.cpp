#include "includes/Bureaucrat.hpp"
#include "includes/AForm.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include <exception>
#include <sys/types.h>
#include <ctime>
#include "includes/Intern.hpp"


int main()
{
	Intern intern;
	Bureaucrat bur("Kira", 1);

	AForm *form1 = intern.makeForm("presidential pardon", "Target1");
	if (form1) {
		std::cout << "Form created successfully: " << form1->getName() << std::endl;
		delete form1;
	}
	else
		delete form1;

	AForm *form2 = intern.makeForm("robotomy request", "Target2");
	if (form2) {
		std::cout << "Form created successfully: " << form2->getName() << std::endl;
		delete form2;
	}
	else
		delete form2;

	AForm *form3 = intern.makeForm("nonexistent form", "Target3");
	if (!form3) {
		std::cout << "Form creation failed!" << std::endl;
		delete form3;
	}
	else
		delete form3;

	AForm *form4 = intern.makeForm("shrubbery creation", "Target4");
	if (form4) {
		std::cout << "Form created successfully: " << form4->getName() << std::endl;
		try {
			form4->beSigned(bur);
			bur.signAForm(*form4);
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			form4->execute(bur);
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		delete form4;
	}
	else
		delete form4;
	return 0;
}
