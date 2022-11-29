/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:32:38 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/13 10:22:05 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
{
    this->m_name = name;
    this->m_hit_points = 10;
    this->m_energy_points = 10;
    this->m_max_energy_points = this->m_energy_points;
    this->m_attack_damage = 0;
    std::cout << "Name Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    *this = src;
    std::cout << "Copy Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor Called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs )
{
    std::cout << "Assignament operator called" << std::endl;
    std::cout << rhs << std::endl;
    return (*this);
}

std::ostream &	operator<<( std::ostream & o, const ClapTrap & instance)
{
	o << "ClapTrap " << instance.getName();
	return (o);
}

const std::string	&ClapTrap::getName( void ) const
{
	return (this->m_name);
}

void   ClapTrap::attack(std::string const & target)
{
    std::cout << "Attacking ..." << std::endl;
    if (this->m_energy_points <= 0)
        std::cout << "===> Bro .. I'm dead, impossible attack!! " << "\n"
        << std::endl;
    else
        std::cout << "ClapTrap " << this->m_name << " attack " << target
            << ", causing " << this->m_hit_points << " points of damage! "
            << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "Receiving damage ..." << std::endl;
    if (this->m_energy_points <= 0)
        std::cout << "Already dead can't get more damage!! " << "\n"
        << std::endl;
    else
    {
        this->m_energy_points -= amount;
        if (this->m_energy_points <= 0)
        {
            std::cout << "ClapTrap " << this->m_name << " took " << amount
            << " damage and is quite unwell ... Dead!!! " << std::endl;
        }
        else
            std::cout << "ClapTrap " << this->m_name << " took " << amount
            << " hit points. Outch!!!... Now only got "
            << this->m_energy_points << " energy points left" << std::endl;
        std::cout << std::endl;
    }
}
        
void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "Repairing ..." << std::endl;
    if (this->m_energy_points <= 0)
    {
        std::cout << this->m_name << " is already dead, imposible repair"
        << std::endl;
        std::cout << std::endl;
        return ;
    }    
    else
    {
        this->m_energy_points += amount;
        if (this->m_energy_points > this->m_max_energy_points)
        {
            this->m_energy_points = this->m_max_energy_points;
            std::cout << this->m_name
            << ", you cant't get more health than your max Energy Points!"
            << std::endl;
        }
    }
    std::cout << "ClapTrap " << this->m_name << " was just get repaired with "
        << amount << " energy points. Now he's got " << this->m_energy_points
        << " Energy Points"<< std::endl;
    std::cout << std::endl;
}