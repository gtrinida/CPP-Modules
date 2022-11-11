#include "ShrubberyCreationForm.hpp"
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
Form("ShrubberyCreationForm", 145, 137), _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) 
	: Form(src.getName(), src.getGradeToSign(), src.getGradeToExecute()), _target(src._target){
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src){
    (void)src;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {

    if(isAllowedToExecute(executor)){
        std::string filename = _target + "_shrubbery";
        std::ofstream os;
       
        os.open(filename.c_str());
        if (!os.is_open()){    
            std::cout << "We can't create/open the file." << std::endl;
            return ;
        }
        os <<     "                                                   .           \n"
				  "                                              .         ;      \n"
				  "                 .              .              ;%     ;;       \n"
				  "                   ,           ,                :;%  %;        \n"
				  "          .         :         ;                   :;%;'     ., \n"
				  "           ,.        %;     %;            ;        %;'    ,;   \n"
				  "             ;       ;%;  %%;        ,     %;    ;%;    ,%'    \n"
				  "              %;       %;%;      ,  ;       %;  ;%;   ,%;'     \n"
				  "               ;%;      %;        ;%;        % ;%;  ,%;'       \n"
				  "                `%;.     ;%;     %;'         `;%%;.%;'         \n"
				  "                 `:;%.    ;%%. %@;        %; ;@%;%'            \n"
				  "                    `:%;.  :;bd%;          %;@%;'              \n"
				  "                      `@%:.  :;%.         ;@@%;'               \n"
				  "                        `@%.  `;@%.      ;@@%;                 \n"
				  "                          `@%%. `@%%    ;@@%;                  \n"
				  "                            ;@%. :@%%  %@@%;                   \n"
				  "                              %@bd%%%bd%%:;                    \n"
				  "                                #@%%%%%:;;                     \n"
				  "                                %@@%%%::;                      \n"
				  "                                %@@@%(o);  . '                 \n"
				  "                                %@@@o%;:(.,'                   \n"
				  "                            `.. %@@@o%::;                      \n"
				  "                               `)@@@o%::;                      \n"
				  "                                %@@(o)::;                      \n"
				  "                               .%@@@@%::;                      \n"
				  "                               ;%@@@@%::;.                     \n"
				  "                              ;%@@@@%%:;;;.                    \n"
				  "                          ...;%@@@@@%%:;;;;,..                 \n";
        os.close();
    }
}

std::string ShrubberyCreationForm::getTarget() const {
    return _target;
}