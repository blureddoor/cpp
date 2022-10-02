

#include "HumanA.hpp"

// Constructor (HumanA = with weapon)
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

// Destructor
HumanA::~HumanA()
{
	
}

// NAME attacks with his WEAPON_TYPE
void	HumanA::attack( void ) const
{
	std::cout << this->_name << " attacks with his "
				<< this->_weapon.get_type() << std::endl;
}