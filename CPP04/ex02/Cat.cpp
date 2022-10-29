#include "Cat.hpp"

Cat::Cat(){
    this->type = "Cat";
    std::cout << "Cat defaul constructor called." << std::endl;   
    _brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal(src){
    
    this->type = "Cat";
    std::cout << "Cat copy constructor called." << std::endl;   
    _brain = new Brain();
    *this = src;
}

Cat &Cat::operator=(const Cat &cat)
{
	std::cout << "Cat assignation operator" << std::endl;
	this->type = cat.type;
	*(this->_brain) = *(cat._brain);
	return *this;
}

Cat::~Cat(){
    std::cout << "Cat destructor called." << std::endl;
    delete _brain; 
}

void Cat::makeSound() const {
    std::cout << "Meow?" << std::endl; 
}
