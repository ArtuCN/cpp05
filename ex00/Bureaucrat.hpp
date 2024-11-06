#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define MAX 150
#define MIN 1

#include <iostream>

class  Bureaucrat
{
	protected:
		int _grade;
		const std::string _name;
	public:
		std::string getName() const { return _name; }
		void setGrade(int grade) { _grade = grade; }
		int getGrade() const {return _grade; }

		Bureaucrat(): _name("default"), _grade(1) {};
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &b): _name(b._name), _grade(b._grade) {};
		Bureaucrat& operator=(const Bureaucrat& b);
		~Bureaucrat() {};
};


#endif

