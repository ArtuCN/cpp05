#include "includes/Bureaucrat.hpp"
#include "includes/Form.hpp"

int	main()
{
	try {
    	// Bureaucrat bob("Bob", 80);
		Form math("math", 50, 50);
		// math.beSigned(bob);
		// bob.signForm(math);
		Bureaucrat flip("flip", 10);
		math.beSigned(flip);
		flip.signForm(math);
	}
	catch (const std::exception &e) {
    	std::cerr << e.what();
	}
	try {
		Bureaucrat bob("Bob", 80);
		Form law("law", 50, 50);
		law.beSigned(bob);
		bob.signForm(law);
	} catch (const std::exception &e) {
		std::cerr << e.what();
	}
	return 0;
}