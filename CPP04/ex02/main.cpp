#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

#define  N_ANIMALS 4


int	main(void)
{
	const Animal* i = new Cat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	delete i;
}