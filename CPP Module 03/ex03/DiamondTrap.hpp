/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:51:50 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/02 21:16:00 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap 
{
    private:
        std::string m_name;
        DiamondTrap();
        
    public:
        DiamondTrap(const std::string name);
        DiamondTrap(const DiamondTrap & src);
        ~DiamondTrap();
        
        DiamondTrap         & operator=(const DiamondTrap &rhs);
        void                attack(const std::string & target) const;
        void                whoAmI() const;
};

#endif