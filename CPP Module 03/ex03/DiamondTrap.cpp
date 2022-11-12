/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:53:03 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/12 13:37:46 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name)
{
    ClapTrap::m_name = name + "_clap_name";
    this->m_name = name;
    this->m_hit_points = FragTrap::m_hit_points;
    this->m_energy_points = ScavTrap::m_energy_points;
    this->m_attack_damage = FragTrap::m_attack_damage;
    std::cout << "DiamondTrap Name Constructor called." << std::endl;
}


DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
    std::cout << "DiamondTrap Copy Constructor called" << std::endl;
    *this = src;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called." << std::endl;
}

DiamondTrap         & DiamondTrap::operator=(const DiamondTrap &rhs)
{
    std::cout << "DiamondTrap Assignament operator called" << std::endl;
    std::cout << rhs << std::endl;
    return (*this);
}

void    DiamondTrap::attack(const std::string & target) const
{ 
    ScavTrap::attack(target);   
}

void    DiamondTrap::whoAmI() const
{
    std::cout << "I am " << this->m_name << " and my ClapTrap name is: "
        << this->getName() << std::endl;
}