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
/*
std::string name_pool[10] = {
	"Jordan",
	"Mr.poopybutthole",
	"Jean-Denis",
	"Table",
	"Charle",
	"Abe",
	"James",
	"Homer",
	"yo",
	"rideaux"
};
*/

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		name.clear();
		for (int c = 0; c < 8; c++)
		{
			if (c % 2)
			{
                name += "qwrtypsdfghjklzxcvbnm"[rand() % 21];
				
            }
			else
			{
				if (c == 0)
					name = "AEIO"[rand() % 4];
				else
					name += "aaeioou"[rand() % 7];	
			}
		}
		horde[i].setName(name);
    }

/*    for (int i = 0; i < N; i++)
    {
        name = name_pool[rand() % 10];
        horde[i].setName(name);
    }
*/
	return (horde);
}


//zombieHorde(size, horde->setName(name_pool[rand() % 10]));