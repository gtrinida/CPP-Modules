#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

#define  N_ANIMALS 4

int	main(void)
{
	std::cout << "--------------------------" << std::endl;
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
	std::cout << "--------------------------" << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;
		delete i;
	}
	std::cout << "--------------------------" << std::endl;
	{
		std::cout << "Dog test:" << std::endl;
		Dog basic;
		{
			Dog tmp = basic;
			(void)tmp;
		}
	}
	std::cout << "--------------------------" << std::endl;
	{
		std::cout << "Cat test:" << std::endl;
		Cat basic;
		{
			Cat tmp = basic;
			(void)tmp;
		}
	}
}