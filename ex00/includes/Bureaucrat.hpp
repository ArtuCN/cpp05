#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <ostream>
#define MAX 150
#define MIN 1

#include <iostream>
#include <stdexcept>

class  Bureaucrat
{
	protected:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat(): _name("Default"), _grade(75) {};
		Bureaucrat(std::string name) : _name(name), _grade(75) {}
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &b): _name(b._name), _grade(b._grade) {};
		Bureaucrat& operator=(const Bureaucrat& b);

		int getGrade() const {return _grade; }
		
		std::string getName() const { return _name; }
		void setGrade(int grade) { _grade = grade; }

		void incrementGrade(const int &num);
		void decrementGrade(const int &num);
		
		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Grade too low!\n";
				}
		};
		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Grade too high!\n";
				}
		};

		~Bureaucrat() {};

};

std::ostream& operator<<(std::ostream&os, const Bureaucrat &b);

#endif

