/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:54:05 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/02 20:48:21 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name)
{
    this->m_name = name;
    this->m_hit_points = 100;
    this->m_energy_points = 100;
    this->m_max_energy_points = this->m_energy_points;
    this->m_attack_damage = 30;
    std::cout << "FragTrap Name Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor Called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs )
{
    std::cout << "FragTrap Assignament operator called" << std::endl;
    std::cout << rhs << std::endl;
    return (*this);
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->m_name << " request High Five " << std::endl;
}