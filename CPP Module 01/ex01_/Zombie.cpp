/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:29:31 by lvintila          #+#    #+#             */
/*   Updated: 2023/03/07 19:49:17 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce( void ) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
std::cout << "this is the constructor of zombieHorde" << std::endl;
}

void	Zombie::setName(std::string new_name)
{
	this->name = new_name;
}

Zombie::~Zombie()
{
	std::cout << "R.I.P " << this->name << std::endl;
}