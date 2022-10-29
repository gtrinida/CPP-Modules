#include "Dog.hpp"

Dog::Dog(){
    this->type = "Dog";
    std::cout << "Dog default called." << std::endl;   
}

Dog::Dog(const Dog& dog) : Animal(dog) {
    std::cout << "Dog copy constructor called." << std::endl;
    *this = dog;
}

Dog &Dog::operator=(const Dog &dog)
{
    this->type = dog.type;
    std::cout << "Dog copy operator" << std::endl;
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof?" << std::endl; 
}
