#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal& src);
    virtual ~Animal();
    Animal &operator=(const Animal &animal);
    virtual void makeSound() const = 0;
    std::string getType() const;
};

#endif