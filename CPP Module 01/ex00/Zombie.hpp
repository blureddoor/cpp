/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 09:22:36 by lvintila          #+#    #+#             */
/*   Updated: 2023/05/01 08:59:45 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class	Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
};

/*
 * Return pointer to Zombie object allocated with "new"
 * Create a Zombie, give it a name and return it so you
 * can use it outside of function scope
 */

Zombie* newZombie( std::string name );

/*
 * Create new Zombie on the stack. Create a Zombie,
 * give it a name and have the zombie announce itself
 */

void	randomChump(std::string name);
#endif
