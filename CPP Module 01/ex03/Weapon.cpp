/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:24:42 by lvintila          #+#    #+#             */
/*   Updated: 2023/03/07 20:11:27 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*
 * constructor Weapon
 */

Weapon::Weapon(std::string type) : type(type)
{
}

/*
 * destructor Weapon
 */

Weapon::~Weapon()
{
}

/*
 * get type of his own (if there any) weapon
 */

std::string	const &Weapon::get_type() const
{
	return (this->type);
}

/*
 * Set new type of weaapon
 */

void	Weapon::setType(std::string new_type)
{
	this->type = new_type;
}