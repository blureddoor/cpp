/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:23:01 by lvintila          #+#    #+#             */
/*   Updated: 2022/10/01 13:33:18 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
Zombie* newZombie(std::string name)
{
	Zombie *newZombie = new Zombie(name);

	return (newZombie);
}
*/

Zombie::Zombie(std::string name)
{
	this->m_name = name;
	std::cout << "Zombie object: " << this->m_name << " created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie object: " << this->m_name << " destroyed" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->m_name << " said: BraiiiiiiinnnzzzZ..." << std::endl;
}