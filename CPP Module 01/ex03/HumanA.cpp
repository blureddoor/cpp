/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:19:31 by lvintila          #+#    #+#             */
/*   Updated: 2023/03/07 20:13:57 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*
 * Constructor (HumanA = with weapon)
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
	std::cout << this->name << " attacks with his "
				<< this->m_weapon.get_type() << std::endl;
}