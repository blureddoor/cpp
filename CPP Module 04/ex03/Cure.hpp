/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:58:58 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/28 22:59:00 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		Cure(std::string const & type);
		Cure(Cure const & cpy);
		virtual ~Cure(void);
		Cure &	operator=(Cure const & rhs);

		Cure*		clone(void) const;
		void		use(ICharacter& target);
};

#endif