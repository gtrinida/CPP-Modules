#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    std::cout << "--------------- Test ---------------" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

    std::cout << "------------ Wrong test ------------" << std::endl;
    const WrongAnimal* wrong = new WrongCat();
    const WrongCat* normal = new WrongCat();
    wrong->makeSound();
    normal->makeSound();
    delete wrong;
    delete normal;

    return (0);
}
