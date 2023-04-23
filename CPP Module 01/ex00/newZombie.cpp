/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:41:32 by lvintila          #+#    #+#             */
/*   Updated: 2023/04/19 19:13:27 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* 
 * Return pointer to Zombie object allocated with "new"
 * Create a Zombie, give it a name and return it so you
 * can use it outside of function scope
 */

Zombie*	newZombie(std::string name)
{
	Zombie *nZmb = new Zombie(name);

	return (nZmb);
}
