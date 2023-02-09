/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:28:07 by lvintila          #+#    #+#             */
/*   Updated: 2023/02/08 18:23:45 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void attack( void ) const;
		void setWeapon(Weapon &new_weapon);
	private:
		std::string	name;
		Weapon		*m_weapon;
	/* 
	 * Make it pointer to be able to assign a new value to it
	 */
};

#endif