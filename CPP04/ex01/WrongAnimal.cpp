#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal default constructor is called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src){
    std::cout << "WrongAnimal copy constructor is called." << std::endl;
    *this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    this->type = src.type;
    std::cout << "WrongAnimal copy operator" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor is called." << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout <<"*Angry woof sounds*" << std::endl;
}