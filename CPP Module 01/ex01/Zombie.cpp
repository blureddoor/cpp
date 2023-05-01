/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:28:36 by lvintila          #+#    #+#             */
/*   Updated: 2023/05/01 09:53:38 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void):name("ZombieName")
{
	std::cout << "Default Constructor: Zombie object " << name << " was created" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Copy Constructor: " << name << " created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Default Destructor: Zombie object "
		<< name << ": AaaaargghhhH ... I'm dying" << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

std::string	Zombie::setName(std::string name)
{
	this->name = name;
	return (name);
}