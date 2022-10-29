#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10),
energyPoints(10), attackDamage(0){
    std::cout << "ClapTrap string constructor called." << std::endl;
}

ClapTrap::ClapTrap() : name("Noname"), hitPoints(10), 
energyPoints(10), attackDamage(0){
    std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &param)
{
	std::cout << "ClapTrap copy constructor called." << std::endl;
	*this = param;
}

const ClapTrap& ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap copy operator called." << std::endl;
	if (this != &src) {
		this->name = src.name;
		this->hitPoints = src.hitPoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << "Clap Trap destructor called." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (amount == 0)
		std::cout << name << ": no damage to the body, but for the soul..." << std::endl;
	if (amount >= hitPoints)
	{
		std::cout << name << ": *dying breath*" << std::endl;
		hitPoints = 0;
		return ;
	}
	hitPoints -= amount;
	std::cout << name << ": took damage, now he has " << hitPoints;
	std::cout << " hitPoints!" << std::endl;
}

void    ClapTrap::attack(const std::string &target){

    if (energyPoints == 0)
    {
        std::cout << name << ": can't attacs, no enegry points!" << std::endl;
        return ;
    }
    std::cout << name << ": attacks the " << target;
    std::cout << ", causing " << attackDamage << " points of damage!" << std::endl;
	energyPoints--;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (energyPoints == 0)
    {
        std::cout << name << ": not enough energy to repair!" << std::endl;
        return ;
    }
	if (hitPoints == 10)
	{
		std::cout << name << ": prevention won't hurt!" << std::endl;
		return ;
	}
	if ((hitPoints + amount) > 10)
	{
		while ((hitPoints + amount) > 10)
			amount--;
	}
	hitPoints += amount;
	energyPoints--;

	std::cout << name << ": repaired now it's: " << hitPoints << " hitPoints!" << std::endl;
}
