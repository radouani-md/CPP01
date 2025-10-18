#include "Zombie.hpp"


Zombie* newZombie( std::string name )
{
    Zombie *zombi = new Zombie(name);
    if (!zombi)
        std::cout << "Memory allocation failed" << std::endl;
    return (zombi);
}