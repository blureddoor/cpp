/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:19:31 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/10 18:20:16 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// Constructor (HumanA = with weapon)
HumanA::HumanA(std::string name, Weapon &weapon) 
	: m_name(name), m_weapon(weapon)
{
}

// Destructor
HumanA::~HumanA()
{
	
}

// NAME attacks with his WEAPON_TYPE
void	HumanA::attack( void ) const
{
	std::cout << this->m_name << " attacks with their "
				<< this->m_weapon.get_type() << std::endl;
}