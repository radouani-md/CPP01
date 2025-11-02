#include "HumanB.hpp"

void    HumanB::attack(void)
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << "NO WEAPON" << std::endl;
}

void    HumanB::setWeapon(Weapon &wep)
{
    weapon = &wep;
}


HumanB::HumanB(std::string name) : weapon(NULL) , name(name) {} 