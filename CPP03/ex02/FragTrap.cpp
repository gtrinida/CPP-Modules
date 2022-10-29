#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap string constructor called" << std::endl;
    this->name = name;
    hitPoints = 100;
    attackDamage = 30;
    energyPoints = 100;
}
FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
	*this = src;
}

const FragTrap& FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap copy operator called." << std::endl;
	if (this != &src) {
		this->name = src.name;
		this->hitPoints = src.hitPoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
	}
	return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "Scav Trap destructor called." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " send a request give him high five!" << std::endl;
}
