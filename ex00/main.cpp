#include "Zombie.hpp"

int main()
{        
    Zombie *p;
    p = newZombie("Boha");
    p->announce();
    randomChump("Moha");

    delete p;
}