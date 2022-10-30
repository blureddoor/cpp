/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:34:19 by lvintila          #+#    #+#             */
/*   Updated: 2022/10/30 14:52:34 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
  	std::string s1 = "Leo";
	std::string s2 = "Adri";

	ClapTrap claptrap1(s1);
    ClapTrap claptrap2(s2);

	std::cout << std::endl;
	claptrap1.attack(s2);
	claptrap2.beRepaired(3);
	
	claptrap2.attack(s1);
	claptrap1.takeDamage(9);
	claptrap2.attack(s1);
	claptrap1.takeDamage(9);
	claptrap2.attack(s1);

	claptrap1.beRepaired(3);
	claptrap2.beRepaired(80);
	std::cout << std::endl;
    
    claptrap1.takeDamage(0);
    claptrap2.takeDamage(0);  
    return (0);
}