#include "Weapon.hpp"

const std::string&	Weapon::getType(void){ return (type); }

void    Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::Weapon(std::string val)
{
    std::cout << val << std::endl;
    this->type = val;
}

