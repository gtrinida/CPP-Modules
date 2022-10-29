#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *_brain;
public:
	Dog();
    virtual ~Dog();
	Dog(const Dog &src);
	Dog& operator=(const Dog& dog);
	void makeSound(void) const;
};

#endif
