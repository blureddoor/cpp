/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:43:18 by lvintila          #+#    #+#             */
/*   Updated: 2023/04/23 07:27:05 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
 * Create new Zombie allocated on the stack. Create a Zombie,
 * give it a name and have the zombie announce itself
 */

void	randomChump( std::string name )
{
	Zombie rndmCh(name);
	rndmCh.announce();
}