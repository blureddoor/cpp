/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:29:31 by lvintila          #+#    #+#             */
/*   Updated: 2022/10/02 13:24:38 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce( void ) const
{
	std::cout << this->m_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
std::cout << "this is constructor of zombieHorde" << std::endl;
}

void	Zombie::set_name(std::string new_name)
{
	this->m_name = new_name;
}

Zombie::Zombie(std::string name) : m_name(name)
{
	announce();
}

Zombie::~Zombie()
{
	std::cout << "R.I.P " << this->m_name << std::endl;
}