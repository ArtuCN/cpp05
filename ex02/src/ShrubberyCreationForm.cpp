#include "../includes/ShrubberyCreationForm.hpp"
#include <iostream>

ShrubberyCreationForm &ShrubberyCreationForm:: operator=(const ShrubberyCreationForm &scf)
{
	if (this != &scf)
	{
		this->_target = scf._target;
	}
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (AForm::getSigned() == false)
		throw;
	if (executor.getGrade() > AForm::getExecGrade())
		throw;
	std::ofstream file((this->_target + "_shrubbery").c_str());
	if (!file.is_open())
	{
		std::cerr<<"Impossible to create "<< this->_target + "_shrubbery"<< " file!\n";
		return;
	}
	file<<"                                               .         ;\n";  
	file<<"                  .              .              ;%     ;;\n";   
	file<<"                    ,           ,                :;%  %;\n";   
	file<<"                     :         ;                   :;%;'     .,\n";
	file<<"            ,.        %;     %;            ;        %;'    \n";
	file<<"              ;       ;%;  %%;        ,     %;    ;%;    ,%'\n";
	file<<"               %;       %;%;      ,  ;       %;  ;%;   ,%;\n"; 
	file<<"                ;%;      %;        ;%;        % ;%;  ,%;'\n";
	file<<"                 `%;.     ;%;     %;'         `;%%;.%;'\n";
	file<<"                  `:;%.    ;%%. %@;        %; ;@%;%\n";
	file<<"                     `:%;.  :;bd%;          %;@%;'\n";
	file<<"                       `@%:.  :;%.         ;@@%;'\n";   
	file<<"                         `@%.  `;@%.      ;@@%;\n";         
	file<<"                           `@%%. `@%%    ;@@%;\n";        
	file<<"                             ;@%. :@%%  %@@%;\n";       
	file<<"                               %@bd%%%bd%%:;\n";     
	file<<"                                 #@%%%%%:;;\n";
	file<<"                                 %@@%%%::;\n";
	file<<"                                 %@@@%(o);  . '\n";         
	file<<"                                 %@@@o%;:(.,'\n";         
	file<<"                             `.. %@@@o%::;\n";         
	file<<"                                `)@@@o%::;\n";         
	file<<"                                 %@@(o)::;\n";        
	file<<"                                .%@@@@%::;\n";         
	file<<"                                ;%@@@@%::;.\n";          
	file<<"                               ;%@@@@%%:;;;. \n";
	file<<"                           ...;%@@@@@%%:;;;;,..\n";
	file.close();
	std::cout<< executor.getName() <<" has drawed an ASCII tree\n";
}
