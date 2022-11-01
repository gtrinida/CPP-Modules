#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
Form("RobotomyRequestForm", 72, 45), _target(target){}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) {
    *this = src;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src){
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (isAllowedToExecute(executor))
	{
		if (std::rand() % 2)
			std::cout << _target << " has been robotomized successfully 50% of the time." << std::endl;
		else
			std::cout << "Robotomy failed." << std::endl;
	}
}