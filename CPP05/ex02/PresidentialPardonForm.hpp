#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
    std::string _target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string target);
    PresidentialPardonForm(const Form& form);
    PresidentialPardonForm(const PresidentialPardonForm& src);
    ~PresidentialPardonForm();
    PresidentialPardonForm &operator=(const PresidentialPardonForm& src);
    
    std::string getTarget() const;
    virtual void execute(Bureaucrat const &executor) const;
};

#endif