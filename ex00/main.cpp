#include "includes/Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b1("Normal", 75);
		std::cout<<b1;
		b1.decrementGrade(76);
		std::cout<<b1;
	}
	catch (Bureaucrat::GradeTooLowException &low)
	{
		std::cerr<< low.what();
	}
	catch (Bureaucrat::GradeTooHighException &high)
	{
		std::cerr<< high.what();
	}
}