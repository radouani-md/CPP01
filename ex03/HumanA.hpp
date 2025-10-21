#ifndef __HumanA__
# define __HumanA__

#include <iostream>
#include "Weapon.hpp"


class HumanA
{
	private:
        Weapon  &weapon;
		std::string name;
		
	public:
		void    attack(void);
        HumanA(std::string name, Weapon &wep);
};


#endif
