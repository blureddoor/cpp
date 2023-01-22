/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:19:13 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/22 11:40:20 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// Constructor (HumanB = without weapon (in the Constructor))
HumanB::HumanB(std::string name)
	: m_name(name)
{
	this->m_weapon = NULL;
}

// Destructor
HumanB::~HumanB()
{
	
}

// attacks with his WEAPON_TYPE if there any
void	HumanB::attack( void ) const
{
	if (this->m_weapon)
	{
		std::cout << this->m_name << " attacks with his "
				<< (*(this->m_weapon)).get_type() << std::endl;
	}
	else
	{
		std::cout << this->m_name << " tries to attack but has no weapon "
					<< std::endl;
	}
	
}
// set typy of weapon even if any (set inicial weapon) 
// or if have one, it change for the new one
void HumanB::setWeapon(Weapon &new_weapon)
{
	this->m_weapon = &new_weapon;
}