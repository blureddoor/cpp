/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:41:39 by lvintila          #+#    #+#             */
/*   Updated: 2023/04/23 08:35:23 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	size;

	size = 15;
	std::string name = "alterEgo";
	Zombie *horde = zombieHorde(size, name);
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
		horde[i].announce();
	std::cout << std::endl;
	delete [] horde;
	return 0;
}

