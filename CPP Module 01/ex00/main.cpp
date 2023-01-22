/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:50:37 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/22 09:44:15 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie zombie("Tracy_manual");
	zombie.announce();
	std::cout << std::endl;
	
	randomChump("TarikBauman_randomChump");
	std::cout << std::endl;

	Zombie *nz  = newZombie("RagnaRock_newZombie");
	nz->announce();
	std::cout << std::endl;
	
	delete nz;
	return 0;
}