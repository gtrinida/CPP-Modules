#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
private:
    std::string _target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const Form& form);
    ShrubberyCreationForm(const ShrubberyCreationForm& src);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm& src);

    std::string getTarget() const;
    virtual void execute(Bureaucrat const &executor) const;
};

#endif