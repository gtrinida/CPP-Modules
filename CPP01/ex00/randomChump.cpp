#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie Z;
    Z.setName(name);
    Z.announce();
}
