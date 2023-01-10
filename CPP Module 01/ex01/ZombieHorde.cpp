/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:31:54 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/10 18:05:33 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
//		name.clear();
		std::string nickname;
		for (int j = 0; j < 7; j++)
		{
			if (j % 2)
			{
                nickname += "qwrtypsdfghjklzxcvbnm"[rand() % 21];
				
            }
			else
			{
				if (j == 0)
					nickname = "AEIOU"[rand() % 5];
				else
					nickname += "eiaou"[rand() % 5];	
			}
		}
		horde[i].setName(name + " " + nickname);
    }
	return (horde);
}