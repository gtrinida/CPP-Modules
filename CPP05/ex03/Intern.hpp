#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
private:
public:
    Intern();
    Intern(const Intern& src);
    ~Intern();
    Intern& operator=(const Intern& src);

    Form *makeForm(std::string form, std::string target);
};

#endif