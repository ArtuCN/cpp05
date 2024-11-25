#include "includes/Bureaucrat.hpp"
#include "includes/AForm.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include <exception>
#include <sys/types.h>
#include <ctime>

int	main()
{
	srand(time(0));
	try {
		ShrubberyCreationForm scf("brokenTree");
		std::cout<<scf;
		Bureaucrat bur("Artu", 1);
		bur.signAForm(scf);
		scf.beSigned(bur);
		scf.execute(bur);
	} catch (const std::exception &e) {
		std::cerr << e.what();
	}
	try{
		PresidentialPardonForm ppf("brokenTree");
		Bureaucrat bur("Trump", 1);
		bur.signAForm(ppf);
		ppf.beSigned(bur);
		ppf.execute(bur);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}
	try{
		RobotomyRequestForm rrf("theRoboty");
		Bureaucrat bur("JoMama", 1);
		bur.signAForm(rrf);
		rrf.beSigned(bur);
		rrf.execute(bur);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}
	

	return 0;
}