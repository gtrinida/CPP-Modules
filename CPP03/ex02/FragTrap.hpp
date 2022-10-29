#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
    FragTrap();
    FragTrap(const FragTrap& src);
    FragTrap(std::string name);
    ~FragTrap();

    const FragTrap& operator=(const FragTrap& src);
    void highFivesGuys();
};

#endif