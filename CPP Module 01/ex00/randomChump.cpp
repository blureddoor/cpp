/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:43:18 by lvintila          #+#    #+#             */
/*   Updated: 2023/02/08 16:19:45 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Creates a new Zombie allocated on the stack */

void	randomChump( std::string name )
{
	Zombie rndmCh = Zombie(name);
	rndmCh.announce();
}