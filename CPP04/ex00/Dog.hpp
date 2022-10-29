#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &dog);
    virtual ~Dog();

	Dog &operator=(const Dog& dog);
	void makeSound(void) const;
};

#endif
