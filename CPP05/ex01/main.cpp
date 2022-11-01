
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    	
	std::cout << "-------Exceptions---------- \n" << std::endl;
	try{
		Form form1("form1", 151, 150);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Form form2("form2", 0, 150);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n-------Sign form----------" << std::endl;
	Bureaucrat Alex("Alex", 55);
	Form A("29-A", 50, 10);
	Form C("29-C", 149, 10);
	std::cout <<"\nForms before sign:\n" << std::endl;
	std::cout << A << std::endl;
	std::cout << C << std::endl;
	Alex.signForm(A);
	Alex.signForm(C);
	std::cout << "\nForms after sign:\n" << std::endl;
	std::cout << A << std::endl;
	std::cout << C << std::endl;

	return 0;
}
