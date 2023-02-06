/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:41:39 by lvintila          #+#    #+#             */
/*   Updated: 2023/02/06 21:18:38 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	size;

	size = 11;
	Zombie *zombi_horde = zombieHorde(size, "zombieHordeMember");
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
		zombi_horde[i].announce();
	std::cout << std::endl;
	delete [] zombi_horde;
}

