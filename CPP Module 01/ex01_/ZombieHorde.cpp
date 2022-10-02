/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:31:54 by lvintila          #+#    #+#             */
/*   Updated: 2022/10/01 13:43:16 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*horde = new Zombie[N];
	std::cout << std::endl;
	for (int i = 0; i < N; i++)
	{
		horde[i].set_name(name + " " + std::to_string(i + 1));
		horde[i].announce();
	}
	return (&(horde[0]));
}