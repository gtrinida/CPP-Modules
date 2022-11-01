#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("PresidentialPardonForm", 25, 5), _target(target){}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) {
    *this = src;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src){
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
   if(isAllowedToExecute(executor))
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}