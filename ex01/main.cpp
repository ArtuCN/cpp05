#include "includes/Bureaucrat.hpp"
#include "includes/Form.hpp"

int	main()
{
	try {
		Form math("math", 50, 50);
		Bureaucrat flip("flip", 10);
		std::cout<<math;
		std::cout<<flip;
		math.beSigned(flip);
		flip.signForm(math);
	}
	catch (const std::exception &e) {
    	std::cerr << e.what();
	}
	try {
		Bureaucrat bob("Bob", 80);
		std::cout<<bob;
		Form law("law", 50, 50);
		std::cout<<law;
		law.beSigned(bob);
		bob.signForm(law);
	} catch (const std::exception &e) {
		std::cerr << e.what();
	}
	return 0;
}