/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:41:32 by lvintila          #+#    #+#             */
/*   Updated: 2023/02/08 16:18:48 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Return pointer to Zombie object allocated with "new" */

Zombie*	newZombie(std::string name)
{
	Zombie *nZmb = new Zombie(name);

	return (nZmb);
}
