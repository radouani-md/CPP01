#include "HumanA.hpp"


void    HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon wep)
{
    this->name = name;
    weapon.setType(wep.getType());
    wep.setType(weapon.getType());
}