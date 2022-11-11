#include "Dog.hpp"

Dog::Dog(){
    this->type = "Dog";
    std::cout << "Dog defaul constructor called." << std::endl;   
    _brain = new Brain();
}

Dog::Dog(const Dog &src) : Animal(src){
    
    this->type = "Dog";
    std::cout << "Dog copy constructor called." << std::endl;   
    _brain = new Brain();
    *this = src;
}

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << "Dog assignation operator" << std::endl;
	this->type = dog.type;
	*(this->_brain) = *(dog._brain);
	return *this;
}

Dog::~Dog(){
    delete _brain; 
    std::cout << "Dog destructor called." << std::endl;
    
}

void Dog::makeSound() const {
    std::cout << "Woof?" << std::endl; 
}
