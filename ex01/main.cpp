#include "includes/Bureaucrat.hpp"
#include "includes/Form.hpp"

int	main()
{
	try {
    	Bureaucrat bob("Bob", 80);
	}
	catch (const std::exception &e) {
    	std::cerr << e.what();
    }

    return 0;
}