/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:50:37 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/10 17:43:26 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie zombie("Tracy_manual");
	zombie.announce();
	std::cout << std::endl;

	
	Zombie *z  = newZombie("RagnaRock_newZombie");
	z->announce();
	std::cout << std::endl;
	
	randomChump("TarikBauman_randomChump");
	std::cout << std::endl;
	
	delete z;
}