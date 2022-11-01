
#include "Bureaucrat.hpp"

int main()
{
    std::cout << "-----Testing operators-----" << std::endl;
    Bureaucrat Masha ("Masha", MAX_GRADE);
    std::cout << Masha;
    ++Masha;
    std::cout << Masha;
    --Masha;
    std::cout << Masha;
    
    std::cout << "-----Testing throw-----" << std::endl;
    try{
        Bureaucrat Sasha("Sasha", MIN_GRADE + 1);
    }
    catch(const std::exception& e){
       std::cout << e.what() << std::endl;
    }

    try{
        Bureaucrat Dasha("Dasha", MIN_GRADE);
        std::cout << Dasha;
    }
    catch(const std::exception& e){
       std::cout << e.what() << std::endl;
    }
}