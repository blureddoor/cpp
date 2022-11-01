/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:54:32 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/01 14:03:17 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    private:

    public:
        FragTrap();
        ~FragTrap();
        FragTrap(std::string const name);
        FragTrap(ClapTrap const & src);

        FragTrap    & operator=(const ClapTrap &rhs);
        void        highFivesGuys(void);
        
};

#endif
