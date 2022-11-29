/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:54:34 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/12 13:05:36 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name)
{
    this->m_name = name;
    this->m_hit_points = 100;
    this->m_energy_points = 50;
    this->m_max_energy_points = this->m_energy_points;
    this->m_attack_damage = 20;
    std::cout << "ScavTrap Name Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor Called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs )
{
    std::cout << "ScavTrap Assignament operator called" << std::endl;
    std::cout << rhs << std::endl;
    return (*this);
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->m_name << " guardGate" << std::endl;
}

void    ScavTrap::attack(std::string const & target) const
{
    std::cout << "Attacking (from ScavTrap) ..." << std::endl;
    if (this->m_energy_points <= 0)
        std::cout << "Bro ... I'm dead, impossible attack!! " << "\n"
        << std::endl;
    else
        std::cout << "ScavTrap " << this->m_name << " attack " << target
            << ", causing " << this->m_hit_points
            << " points of damage of his target! "<< std::endl;
}