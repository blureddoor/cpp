/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:34:19 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/01 11:46:14 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap c("John");

	c.attack("Handsome Jack");
	c.takeDamage(6);
	c.beRepaired(4);
	c.takeDamage(3);
	c.beRepaired(8);
	c.takeDamage(9); // changing here for 10 or more amount of damage will change the behavior 
	c.beRepaired(8);
	c.attack("Handsome Jack");
	c.takeDamage(3);
	c.beRepaired(4);

    return (0);
}