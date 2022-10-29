#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

#define  N_ANIMALS 4

int	main(void)
{
    {
		const Animal* animals[N_ANIMALS];
		for (int i = 0; i < N_ANIMALS / 2; i++)
			animals[i] = new Dog();
		for (int i = N_ANIMALS / 2; i < N_ANIMALS; i++)
			animals[i] = new Cat();
		for (int i = 0; i < N_ANIMALS; i++)
		{
			std::cout << animals[i]->getType() << std::endl;
			delete animals[i];
		}
	}
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;
		delete i;
	}
	{
		std::cout << "Deep test dog:" << std::endl;
		Dog basic;
		{
			Dog tmp = basic;
			(void)tmp;
		}
	}
	{
		std::cout << "Deep test cat:" << std::endl;
		Cat basic;
		{
			Cat tmp = basic;
			(void)tmp;
		}
	}
}