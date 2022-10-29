#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& src);
    ~ScavTrap();
    
    const ScavTrap& operator=(const ScavTrap& src);
    void guardGate();
};

#endif
