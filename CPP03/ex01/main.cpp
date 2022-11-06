#include "ScavTrap.hpp"

int main(void){
    {
        std::cout << "\n-------ScavTrap-------\n" << std::endl;
        ScavTrap PersonA("PersonA");
        ScavTrap PersonB("PersonB");

        PersonA.attack("PersonB");
        PersonB.takeDamage(20);
        PersonB.beRepaired(20);
        PersonB.attack("PersonA");
        PersonA.takeDamage(20);
        PersonB.attack("PersonA");
        PersonA.takeDamage(20);
        PersonB.attack("PersonA");
        PersonA.takeDamage(20);
        PersonB.attack("PersonA");
        PersonA.takeDamage(20);
        PersonB.attack("PersonA");
        PersonA.takeDamage(20);
        PersonB.guardGate();
    }
    {
        std::cout << "\n-------ClapTrap-------\n" << std::endl;
        ClapTrap Cat("Cat");
        ClapTrap Dog("Dog");

        Cat.attack("Dog");
        Dog.takeDamage(0);
        Cat.beRepaired(0);
    }
}