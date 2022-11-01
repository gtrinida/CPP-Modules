
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern noname;
	Bureaucrat Steech("Steech", 21);

	Form *A = noname.makeForm("the usual shape, so rectangular, well, you'll figure it out", "faster");
	Form *B = noname.makeForm("shrubbery creation", "Home");
	if (!A)
		A = noname.makeForm("presidential pardon", "pardon");
	Steech.executeForm(*B);
	Steech.signForm(*B);
	Steech.executeForm(*B);
	std::cout <<*B;
	delete A;
	delete B;
	return 0;
}
