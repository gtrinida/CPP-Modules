#include "Cat.hpp"


Cat::Cat(){
    this->type = "Cat";
    std::cout << "Cat default constructor called." << std::endl;   
}

Cat::Cat(const Cat& cat) : Animal(cat){
    std::cout << "Cat copy constructor called." << std::endl;
    *this = cat;
}

Cat &Cat::operator=(const Cat &cat)
{
    this->type = cat.type;
    std::cout << "Cat copy operator" << std::endl;
    return *this;
}
Cat::~Cat(){
    std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow?" << std::endl; 
}
