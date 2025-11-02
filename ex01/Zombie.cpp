#include "Zombie.hpp"

void			Zombie::setName(std::string name){ this->name = name; }

Zombie::Zombie(){}

void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " Has been Destroyed" << std::endl;
}