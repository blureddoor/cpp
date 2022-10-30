/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:32:38 by lvintila          #+#    #+#             */
/*   Updated: 2022/10/30 14:53:42 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/**
 * @brief Construct a new Clap Trap:: Clap Trap object
 * Hitpoints
 * @param name 
 */


 
ClapTrap::ClapTrap(std::string name)
{
    this->m_name = name;
    std::cout << "Constructor called" << std::endl;
    this->m_hit_points = 10;
    this->m_energy_points = 10;
    this->m_attack_damage = 0;
/*  std::cout << "Energy points are: " << this->m_energy_points << std::endl;
    std::cout << "Hit points if you are attacked is: " << this->m_hit_points << std::endl;
    std::cout << "Initial Damage is: " << this->m_attack_damage << std::endl;
    */
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor Called" << std::endl;
}

void   ClapTrap::attack(std::string const & target)
{
    // this->m_hit_points = ;
    std::cout << this->m_name << " attack " << target << ", causing " << this->m_hit_points<< " points of damage! " << std::endl;
//  this->m_energy_points += this->m_hit_points;
    std::cout << this->m_name << "'s Energy points are: " << this->m_energy_points << std::endl;
    this->m_attack_damage -= this->m_hit_points;
//  std::cout << this->m_name << "'s Damage points are: " << this->m_energy_points << std::endl;
    std::cout << "Energy points are: " << this->m_energy_points << std::endl;
//  std::cout << "Hit points if you are attacked is: " << this->m_hit_points << std::endl;
//  std::cout << "Initial Damage is: " << this->m_attack_damage << std::endl;
    std::cout << " End of the attack function " << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
//  std::cout << "attack damage is: " << m_attack_damage << std::endl;
    this->m_attack_damage += amount;
    std::cout << "Damage of " << this->m_name << " is: " << m_attack_damage << std::endl;
    std::cout << this->m_name << "'s Energy points are: " << this->m_energy_points << std::endl;
    std::cout << "end of takeDamage function" <<std::endl;
}
        
void    ClapTrap::beRepaired(unsigned int amount)
{
    this->m_energy_points += amount;
    std::cout << this->m_name << " be repaired with " << amount << " of Energy Points" << std::endl;
    std::cout << "end of repair function" << std::endl;
}