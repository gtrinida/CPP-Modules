
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
   	Form *form1 = new PresidentialPardonForm("Home");
	Form *form2 = new RobotomyRequestForm("Home");
	Form *form3 = new ShrubberyCreationForm("Home");
	Bureaucrat Steech("Steech", 1);
	Steech.executeForm(*form1);
	std::cout << "\n---sign form---\n" << std::endl;
    Steech.signForm(*form1);
	Steech.signForm(*form2);
	Steech.signForm(*form3);
    std::cout << "\n---execute form---\n" << std::endl;
	Steech.executeForm(*form1);
	Steech.executeForm(*form2);
	Steech.executeForm(*form3);
	delete form1;
	delete form2;
	delete form3;
	return 0;
}
