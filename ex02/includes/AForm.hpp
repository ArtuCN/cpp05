#ifndef AFORM_H
#define AFORM_H

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>
#include <string>
#include <sys/types.h>

#define uint unsigned int


class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		const	int _gradeToSign;
		const	int _gradeExec;
		bool	_signed;
	public:
		AForm(): _name("default"), _gradeToSign(75), _gradeExec(75), _signed(false) {};
		AForm(const std::string name, int grade, int gradeExec): _name(name), _gradeToSign(grade), _gradeExec(gradeExec), _signed(false){};
		AForm(const AForm &f): _name(f._name), _gradeToSign(f._gradeToSign), _gradeExec(f._gradeExec), _signed(f._signed) {};
		AForm& operator=(const  AForm &f);

		std::string getName() {return _name; };
		int getGrade() { return _gradeToSign; };
		int getExecGrade() {return _gradeExec; } ;
		bool getSigned() {return _signed; };

		class gradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw();

		};
		class gradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw();

		};
		virtual void beSigned(const Bureaucrat &b);
		virtual void execute(Bureaucrat const &executor)const = 0;
		virtual ~AForm() {};
};

#endif