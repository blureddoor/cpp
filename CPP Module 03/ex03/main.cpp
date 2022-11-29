/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:50:27 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/13 10:07:44 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* revisar por que la función "attack" del diamondTrap ccausa -332423832482
points of dammage a su adversario */

#include "DiamondTrap.hpp"

int	main( void )
{
	{
		DiamondTrap d("Leo");

		d.attack("Handsome Jack");
		d.takeDamage(6);
		d.beRepaired(4);
		d.takeDamage(3);
		d.guardGate();
		d.highFivesGuys();
		d.whoAmI();
		d.beRepaired(8);
		d.takeDamage(17);
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		FragTrap fr("Star");

		fr.attack("Handsome Jack");
		fr.takeDamage(6);
		fr.beRepaired(4);
		fr.takeDamage(3);
		fr.highFivesGuys();
		fr.beRepaired(8);
		fr.takeDamage(17);
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		ScavTrap sc("Boy");

		sc.attack("Handsome Jack");
		sc.takeDamage(6);
		sc.beRepaired(4);
		sc.takeDamage(3);
		sc.guardGate();
		sc.beRepaired(8);
		sc.takeDamage(17);
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		ClapTrap cl("Cris");

		cl.attack("Handsome Jack");
		cl.takeDamage(6);
		cl.beRepaired(4);
		cl.takeDamage(3);
		cl.beRepaired(8);
		cl.takeDamage(17);
	}
}

