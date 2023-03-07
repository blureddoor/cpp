/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 09:22:36 by lvintila          #+#    #+#             */
/*   Updated: 2023/03/07 20:08:31 by lvintila         ###   ########.fr       */
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
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
};

/*
 * Return pointer to Zombie object allocated with "new"
 */

Zombie* newZombie( std::string name );

/*
 * Creates new Zombie on the stack
 */

void	randomChump(std::string name);
#endif
