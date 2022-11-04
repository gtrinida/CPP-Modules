#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
public:
    HumanA(const std::string name, Weapon &weapon);
   
    void    setName(std::string name);
    void    attack();
    
private:
    std::string _name;
    Weapon     &_weapon;
};

#endif