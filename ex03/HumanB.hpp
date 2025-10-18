#ifndef __HumanB__
# define __HumanB__

#include <iostream>
#include "Weapon.hpp"


class HumanB
{
	private:
        Weapon  weapon;
		std::string name;
		
	public:
		void    attack(void);
};


#endif