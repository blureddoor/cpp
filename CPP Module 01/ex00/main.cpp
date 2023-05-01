/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:50:37 by lvintila          #+#    #+#             */
/*   Updated: 2023/05/01 09:01:51 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	
	Zombie zombie1;
	zombie1.announce();
	std::cout << std::endl;
	
	Zombie zombie2("Tracy_copy");
	zombie2.announce();
	std::cout << std::endl;
	
	randomChump("TarikBauman_randomChump");
	std::cout << std::endl;

	Zombie *nz  = newZombie("RagnaRock_newZombie");
	nz->announce();
	
	delete nz;
	return 0;
}