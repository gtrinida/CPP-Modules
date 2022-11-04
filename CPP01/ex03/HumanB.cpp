#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) 
    : name(name), _weapon(NULL) {}

void    HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &type)
{
    this->_weapon = &type;
}