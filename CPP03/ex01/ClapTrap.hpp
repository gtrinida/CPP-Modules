#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
    std::string name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;
    
public:
    
    ClapTrap();
    ClapTrap(const ClapTrap &param);
    ClapTrap(std::string name);
    ~ClapTrap();

    const ClapTrap& operator=(const ClapTrap& src);
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif