#include "Zombie.hpp"

int main()
{
    Zombie *p;
    p = zombieHorde(5, "mohammed");
    for (int i = 0; i < 5; i++)
    {
        std::cout << "zombie " << i + 1 << "-->"; 
        p[i].announce();
    }
    delete [] p;
}