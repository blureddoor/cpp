/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:41:39 by lvintila          #+#    #+#             */
/*   Updated: 2022/10/16 12:25:39 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	size;

	size = 8;
	Zombie *horde = zombieHorde(size, "ZombieHordeMember");
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
		horde[i].announce();
	std::cout << std::endl;
	delete [] horde;
}

