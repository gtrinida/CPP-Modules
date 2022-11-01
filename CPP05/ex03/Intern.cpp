#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern& inter){}

Intern::~Intern(){}

Intern& Intern::operator=(const Intern& inter){
    (void)inter;
    return *this;
}

Form* Intern::makeForm(std::string name, std::string target){
    
    Form *FormIneed = 0;

    Form *form[3] = {
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target),
        new ShrubberyCreationForm(target)
    };
    std::string types[3] = { 
        "robotomy request", 
        "presidential pardon",
        "shrubbery creation" 
    };
    for (int i = 0; i < 3; i++)
    {
        if (types[i] == name)
            FormIneed = form[i];
        else
            delete form[i];  
    }
    if (!FormIneed){
        std::cout << "Can't find " << "'" << name << "'" << " form, sorry." << std::endl;
        return NULL;
    }
    std::cout << "Inter creates " << FormIneed->getName() << std::endl;
    return FormIneed;
}