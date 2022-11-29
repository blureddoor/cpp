/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:07:27 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/29 19:28:46 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string m_type;
        unsigned int    m_xp;
        
    public:
        AMateria(); // Linea Leo
        AMateria(AMateria const & src); // Linea Leo
        AMateria & operator=(const AMateria & ref); // Linea Leo
        
        AMateria(const std::string  & type);
        virtual ~AMateria() {}; //linea Leo
        unsigned int        getXP() const;
        void                setXP ();
        
        const std::string           & getType() const; //Returns the materia type
        virtual AMateria            * clone() const = 0;
        virtual void                use( ICharacter & target ) = 0; // que es? para qué se utiliza??? (Leo)
};

// std::ostream & operator<<( std::ostream &o, const AMateria &instance );

#endif