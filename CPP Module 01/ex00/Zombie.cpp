/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:23:01 by lvintila          #+#    #+#             */
/*   Updated: 2023/05/01 09:47:08 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(): name("Zombie")
{
	std::cout << "Default Constructor: " << name << " was created" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Copy Constructor: " << name << " created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " destroyed" << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}