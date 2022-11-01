#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
    std::string _target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const Form& form);
    RobotomyRequestForm(const RobotomyRequestForm& src);
    ~RobotomyRequestForm();
    RobotomyRequestForm &operator=(const RobotomyRequestForm& src);

    std::string getTarget() const;
    virtual void execute(Bureaucrat const &executor) const;
};

#endif