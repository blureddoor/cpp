/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:28:05 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/28 22:54:44 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *  m_materias[4];
	public:
        MateriaSource();
        MateriaSource(MateriaSource const & src);
		virtual ~MateriaSource();
        MateriaSource &	operator=(MateriaSource const & rhs);
		virtual void learnMateria(AMateria* materia_to_learn);
		virtual AMateria* createMateria(std::string const & type);
};
#endif
