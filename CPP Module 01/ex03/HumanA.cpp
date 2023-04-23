/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:19:31 by lvintila          #+#    #+#             */
/*   Updated: 2023/04/19 20:05:30 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*
 * Constructor (HumanA = with weapon in the Constructor)
 */

HumanA::HumanA(std::string name, Weapon &weapon) 
	: name(name), m_weapon(weapon)
{
}

/* 
 * Destructor
 */

HumanA::~HumanA()
{
}

/*
 * attacks with his WEAPON_TYPE
 */

void	HumanA::attack( void ) const
{
	std::cout << this->name << " attacks with their "
				<< this->m_weapon.get_type() << std::endl;
}