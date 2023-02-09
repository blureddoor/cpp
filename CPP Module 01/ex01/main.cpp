/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:41:39 by lvintila          #+#    #+#             */
/*   Updated: 2023/02/08 16:49:04 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	size;

	size = 7;
	Zombie *zombiHorde = zombieHorde(size, "zombieHordeMember");
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
		zombiHorde[i].announce();
	std::cout << std::endl;
	delete [] zombiHorde;
}

