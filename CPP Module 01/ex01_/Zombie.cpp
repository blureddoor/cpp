/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:29:31 by lvintila          #+#    #+#             */
/*   Updated: 2023/02/08 16:59:42 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce( void ) const
{
	std::cout << this->m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
std::cout << "this is the constructor of zombieHorde" << std::endl;
}

void	Zombie::setName(std::string new_name)
{
	this->m_name = new_name;
}

Zombie::~Zombie()
{
	std::cout << "R.I.P " << this->m_name << std::endl;
}