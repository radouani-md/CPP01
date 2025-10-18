#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

#include <iostream>


class Weapon
{
	private:
		std::string type;
		
	public:
		Weapon() {};
		const std::string&	getType(void);
		void			setType(std::string type);
		Weapon(std::string val);
};


#endif