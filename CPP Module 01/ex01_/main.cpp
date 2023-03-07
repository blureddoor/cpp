/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:41:39 by lvintila          #+#    #+#             */
/*   Updated: 2023/03/07 19:49:15 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	size;

	size = 10;
	Zombie *horde;
	
	horde = zombieHorde(size, "Zombie horde member");
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
		horde[i].announce();
	std::cout << std::endl;
	delete [] horde;
}

