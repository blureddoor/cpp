/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 09:50:44 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/22 09:51:44 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cctype>

class	Zombie
{
	private:
		std::string	m_name;
	public:
		Zombie(void);
		~Zombie(void);
		void	announce();
		std::string	setName(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif