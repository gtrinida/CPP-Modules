#include "ClapTrap.hpp"

int main(void){
    ClapTrap Cat("Cat");
    ClapTrap Dog("Dog");

    Cat.attack("Dog");
    Dog.takeDamage(0);
    Cat.beRepaired(0);
}