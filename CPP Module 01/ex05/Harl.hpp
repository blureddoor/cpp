/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:10:15 by lvintila          #+#    #+#             */
/*   Updated: 2023/02/07 23:10:08 by lvintila         ###   ########.fr       */
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

		void		debug(void);
		void 		info(void);
		void 		warning(void);
		void		error(void);
};

#endif