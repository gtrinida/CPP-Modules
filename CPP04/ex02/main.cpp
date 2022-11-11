#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int	main(void)
{
	const Animal* i = new Cat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	std::cout << "----------------------" << std::endl;
	delete i;
}
