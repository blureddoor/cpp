/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:32:10 by lvintila          #+#    #+#             */
/*   Updated: 2022/10/30 14:09:39 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string m_name;
        int         m_hit_points;
        int         m_energy_points;
        int         m_attack_damage;
    
    public:
       // ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap & operator=(const ClapTrap &rhs);
        void    attack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif

