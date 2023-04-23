/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:19:13 by lvintila          #+#    #+#             */
/*   Updated: 2023/04/23 08:50:12 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*
 * Constructor (HumanB = without weapon (in the Constructor))
 */

HumanB::HumanB(std::string name)
	: name(name)
{
	this->m_weapon = NULL;
}

/*
 * Destructor
 */

HumanB::~HumanB()
{
	
}

/*
 * attacks with their WEAPON_TYPE if there any
 */

void	HumanB::attack( void ) const
{
	if (this->m_weapon)
	{
		std::cout << this->name << " attacks with their "
				<< (this->m_weapon)->get_type() << std::endl;
	}
	else
	{
		std::cout << this->name << " tries to attack but has no weapon "
					<< std::endl;
	}
	
}

/*
 * set the type of weapon even if there is none (set initial weapon) 
 * or if there is, change it to the new one
 */

void HumanB::setWeapon(Weapon &new_weapon)
{
	this->m_weapon = &new_weapon;
}