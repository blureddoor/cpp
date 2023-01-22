/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:10:27 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/22 13:10:30 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>
# include <stdlib.h>


class Harl
{
	public:
		Harl(void);
		void complain(std::string level);
		void etc(void);

	private:
		typedef struct s_status
		{
					std::string m_name;
		}			t_status;
		t_status	m_status[4];

		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
};

#endif