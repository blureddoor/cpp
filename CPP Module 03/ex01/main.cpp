/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:58:05 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/01 13:33:12 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int	main( void )
{
	
        ScavTrap sc("John");

        sc.attack("Handsome Jack");
        sc.takeDamage(6);
        sc.beRepaired(8);
        sc.guardGate();
        sc.attack("Handsome Jack");
        sc.takeDamage(100);
        sc.attack("Handsome Jack");
        sc.beRepaired(4);
	
	
        ClapTrap c("John");

        c.attack("Handsome Jack");
        c.takeDamage(6);
        c.beRepaired(8);
        c.attack("Handsome Jack");
        c.takeDamage(3);
        c.attack("Handsome Jack");
        c.beRepaired(4);
	
}