/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:41:32 by lvintila          #+#    #+#             */
/*   Updated: 2023/03/07 20:07:33 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* 
 * Return pointer to Zombie object allocated with "new"
 */

Zombie*	newZombie(std::string name)
{
	Zombie *nZmb = new Zombie(name);

	return (nZmb);
}
