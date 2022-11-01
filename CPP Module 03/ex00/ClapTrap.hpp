/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:32:10 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/01 11:49:08 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
    private:
        std::string m_name;
        int         m_hit_points;
        int         m_max_energy_points;
        int         m_energy_points;
        int         m_attack_damage;
    
    public:
        ClapTrap(std::string const name);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap();
        
        ClapTrap            & operator=(const ClapTrap &rhs);
        
        void                attack(std::string const & target);
        void                takeDamage(unsigned int amount);
        void                beRepaired(unsigned int amount);
        const std::string   & getName (void) const;
};

std::ostream & operator<<( std::ostream &o, const ClapTrap &instance );

#endif

