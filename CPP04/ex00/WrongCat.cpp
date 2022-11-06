#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src){
    *this = src;
    std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    std::cout << "WrongCat copy operator called." << std::endl;
    this->type = src.type;
    return (*this);
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called." << std::endl;
}

void WrongCat::makeSound()const{
    std::cout << "Meow" << std::endl;
}
