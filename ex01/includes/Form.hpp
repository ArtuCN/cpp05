#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>
#include <string>
#include <sys/types.h>

#define uint unsigned int


class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		const	int _gradeToSign;
		const	int _gradeExec;
		bool	_signed;
	public:
		Form(): _name("default"), _gradeToSign(75), _gradeExec(75), _signed(false) {};
		Form(const std::string name, int grade, int gradeExec): _name(name), _gradeToSign(grade), _gradeExec(gradeExec), _signed(false){};
		Form(const Form &f): _name(f._name), _gradeToSign(f._gradeToSign), _gradeExec(f._gradeExec), _signed(f._signed) {};
		Form& operator=(const  Form &f);

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
		void beSigned(const Bureaucrat &b);
		~Form() {};
};


#endif