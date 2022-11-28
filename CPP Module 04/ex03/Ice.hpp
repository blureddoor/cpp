/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:59:35 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/28 22:59:42 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ICE_HPP
# define ICE_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice(void);
		Ice(std::string const & type);
		Ice(Ice const & cpy);
		virtual ~Ice(void);
		Ice &	operator=(Ice const & rhs);

		Ice	*		clone(void) const;
		void		use(ICharacter& target);
};

#endif