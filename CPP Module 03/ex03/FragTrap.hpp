/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:54:32 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/12 12:47:46 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    protected:
        FragTrap();

    public:
        ~FragTrap();
        FragTrap(std::string const name);
        FragTrap(ClapTrap const & src);

        FragTrap    & operator=(const FragTrap &rhs);
        void        highFivesGuys(void);
        
};

#endif
