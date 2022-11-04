#include "Zombie.hpp"

int main(void)
{
    Zombie Foo;
    Foo.setName("Foo");
    Foo.announce();

    Zombie *Alex = newZombie("Alex");
    Alex->announce();

    randomChump("Jonh");
    delete(Alex);
    return (1);
}