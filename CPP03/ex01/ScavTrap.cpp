#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap string constructor called" << std::endl;
    this->name = name;
    hitPoints = 100;
    attackDamage = 20;
    energyPoints = 50;
}

ScavTrap::ScavTrap(const ScavTrap& src)
{
    std::cout << "ScavTrap copy constructor called." << std::endl;
    *this = src;
}

const ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
    std::cout << "ScavTrap copy operator called." << std::endl;
    if (this != &src){
        this->name = src.name;
		this->hitPoints = src.hitPoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called." << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}
