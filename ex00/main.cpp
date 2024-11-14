#include "includes/Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b1("Normal");
		std::cout<<b1.getName() << " grade is " << b1.getGrade() <<" !\n";
		b1.decrementGrade(80);
		std::cout<<b1.getName() << " grade is " << b1.getGrade() <<" !\n";
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