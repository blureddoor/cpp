/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:19:13 by lvintila          #+#    #+#             */
/*   Updated: 2022/10/16 11:26:00 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// Constructor (HumanB = without weapon)
HumanB::HumanB(std::string name)
	: m_name(name)
{
	this->m_weapon = NULL;
}

// Destructor
HumanB::~HumanB()
{
	
}

// NAME attacks with his WEAPON_TYPE
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

void HumanB::setWeapon(Weapon &new_weapon)
{
	this->m_weapon = &new_weapon;
}