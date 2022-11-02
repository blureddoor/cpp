/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:53:03 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/02 21:28:26 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name)
{
    ClapTrap::m_name = name + "_clap_name";
    this->m_name = name;
    this->m_hit_points = FragTrap::m_hit_points;
    this->m_energy_points = ScavTrap::m_energy_points;
    this->m_attack_damage = FragTrap::m_attack_damage;
    std::cout << "Diamond Name Constructor called." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamond Destructor called." << std::endl;
}

DiamondTrap         & operator=(const DiamondTrap &rhs)
{
    std::cout << "DiamondTrap Assignament operator called" << std::endl;
    std::cout << rhs << std::endl;
    return (*this);
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
    *this = src;
    std::cout << "Diamond Copy Constructor called" << std::endl;
}