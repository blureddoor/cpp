/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:10:15 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/22 13:10:18 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>


class Harl{
	public:
		Harl(void);
		void complain(std::string level);

	private:
		typedef struct	s_status
		{
					std::string	m_name;
					void(Harl::*ptr)(void);
		}			t_status;
		t_status	m_status[4];
		void		debug(void);
		void 		info(void);
		void 		warning(void);
		void		error(void);
};

#endif