/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:07:21 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/29 19:40:39 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria()
{
//    std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
    *this = src;
//    std::cout << "AMateria Copy Constructor called" << std::endl;
}

/*
AMateria::~AMateria()
{
    
}
*/

AMateria & AMateria::operator=(AMateria const & ref) // Linea Leo
{
//    std::cout << "ICharacter Assignament operator called" << std::endl;
    this->m_type = ref.getType();
    return (*this);
}

AMateria::AMateria(std::string const & type)
{
    m_type = type;
    m_xp = 0;
//    std::cout << "String Constructor AMateria called" << std::endl;
}

const std::string & AMateria::getType() const //Returns the materia type
{
    return (this->m_type);   
}

unsigned int		AMateria::getXP() const
{
	return (this->m_xp);
}

void				AMateria::setXP()
{
	this->m_xp += 10;
}