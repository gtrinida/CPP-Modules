#include "Zombie.hpp"

int main (void)
{
  	int N = 100;
  	Zombie *Horde = zombieHorde(N, "ALEX");

  	for (int i = 0; i < N; i++)
    	Horde[i].announce();
	delete [] Horde;
	return (0);
}
