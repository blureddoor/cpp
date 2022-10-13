/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:24:42 by lvintila          #+#    #+#             */
/*   Updated: 2022/10/13 21:25:51 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Weapon.hpp"

Weapon::Weapon(std::string type) : m_type(type)
{
}

Weapon::~Weapon()
{
}

std::string	const &Weapon::get_type() const
{
	return (this->m_type);
}

void	Weapon::setType(std::string new_type)
{
	this->m_type = new_type;
}