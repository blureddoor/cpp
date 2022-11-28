#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(void)
{
	m_name = "";
	m_number_equipped = 0;
	for (int i = 0; i < Character::m_inventory_size; i++)
		this->m_inventory[i] = NULL;
	std::cout << "Default Character Constructor called" << std::endl;
	return;
}

Character::Character( const std::string &name )
{
	*this = Character();
	this->m_name = name;
	std::cout << "Name constructor for Character called" << std::endl;
	return;
}


Character::Character( Character const & src )
{
	std::cout << "Copy constructor for Character called" << std::endl;
	*this = src;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	std::cout << "Destructor for Character called" << std::endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	this->m_number_equipped = 0;
	for (int i = 0; i < Character::m_inventory_size;i++)
	{
		if (this->m_inventory[i])
			delete this->m_inventory[i];
		this->m_inventory[i] = rhs.m_inventory[i];
		if (rhs.m_inventory[i])
			this->m_number_equipped++;
	}
	this->m_name = rhs.getName();
	std::cout << "Assignement operator for Character called" << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const	&Character::getName() const
{
	return (this->m_name);
}

void				Character::equip(AMateria* m)
{
	if (this->m_number_equipped < Character::m_inventory_size)
	{
		this->m_inventory[this->m_number_equipped] = m;
		this->m_number_equipped++;
		std::cout << "Equipped a " << m->getType() << std::endl;
	}
	else
		std::cout << "Couldn't equip a " << m->getType()
			<< "Not enough space left." << std::endl;
}

void                Character::unequip(int idx)
{
	int i;

	i = idx + 1;
	while (i < Character::m_inventory_size && this->m_inventory[i])
	{
		this->m_inventory[i - 1] = this->m_inventory[i];
		i++;
	}
	this->m_inventory[i] = NULL;
}

void                Character::use(int idx, ICharacter & target)
{
	this->m_inventory[idx]->use(target);
	this->unequip(idx);
}

void				Character::printInventory( void ) const
{
	for (int i = 0; i < Character::m_inventory_size;i++)
	{
		if (this->m_inventory[i])
			std::cout << i << ": " << this->m_inventory[i] << std::endl;
		else
			std::cout << i << ": empty"<< std::endl;
	}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */