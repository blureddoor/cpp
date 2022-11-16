/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:07:27 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/16 21:51:22 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>

class AMateria
{
    protected:
        std::string type;
        
    public:
        AMateria(); // Linea Leo
        ~AMateria(); //linea Leo
        AMateria(AMateria const & src); // Linea Leo
        virtual AMateria & operator=(const AMateria & ref); // Linea Leo
        
        AMateria(std::string const & type);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter & target); // que es? para qué se utiliza??? (Leo)
};

std::ostream & operator<<( std::ostream &o, const AMateria &instance );

#endif