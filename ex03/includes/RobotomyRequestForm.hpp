#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm() : AForm("default", 72, 45), _target("default") {};
		RobotomyRequestForm(const std::string &target) : AForm("default", 72, 45), _target(target) {};
		RobotomyRequestForm(const RobotomyRequestForm &rqf) : _target(rqf._target) {};
		RobotomyRequestForm &operator=(const RobotomyRequestForm &rqf);
		~RobotomyRequestForm() {};

		void execute(const Bureaucrat &executor)const;
};

#endif