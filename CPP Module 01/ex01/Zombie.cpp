/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:28:36 by lvintila          #+#    #+#             */
/*   Updated: 2022/10/16 12:22:35 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->m_name = "";
	std::cout << "(Constructor said) Zoombie object" << this->m_name << " was created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "(Destructor said) Zoombie object" << this->m_name << ": Aaaaarg ... me dying" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->m_name << " BraiiiiiiinnnzzzZ..."<< std::endl;
}

std::string	Zombie::setName(std::string name)
{
	this->m_name = name;
	return (name);
}