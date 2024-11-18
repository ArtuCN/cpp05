#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define MAX 150
#define MIN 1

#include <iostream>
#include <stdexcept>


class AForm;

class  Bureaucrat
{
	protected:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat(): _name("Default"), _grade(75) { std::cout<< _name << " created!\n";};
		Bureaucrat(std::string name) : _name(name), _grade(75) { std::cout<< _name << " created!\n"; }
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &b): _name(b._name), _grade(b._grade) {};
		Bureaucrat& operator=(const Bureaucrat& b);

		int getGrade() const {return _grade; }
		
		std::string getName() const { return _name; }
		void setGrade(int grade) { _grade = grade; }

		void incrementGrade(const unsigned int &num);
		void decrementGrade(const unsigned int &num);
		
		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw() {
					return "AForm Grade too low!\n";
				}
		};
		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw() {
					return "AForm Grade too high!\n";
				}
		};

		void signAForm(AForm &AForm);

		~Bureaucrat() {};

};


#endif

