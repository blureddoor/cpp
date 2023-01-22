/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:24:42 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/22 11:24:15 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Weapon.hpp"

// constructor Weapon
Weapon::Weapon(std::string type) : m_type(type)
{
}

// destructor Weapon
Weapon::~Weapon()
{
}


// get type of his own (if there any) weapon
std::string	const &Weapon::get_type() const
{
	return (this->m_type);
}
// Set new type of weaapon
void	Weapon::setType(std::string new_type)
{
	this->m_type = new_type;
}