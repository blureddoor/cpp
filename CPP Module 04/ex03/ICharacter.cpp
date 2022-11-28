/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:12:38 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/28 20:29:04 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Icharacter.hpp"

/*
ICharacter::ICharacter() // Linea Leo
{
    std::cout << "ICharacter Constructor called" << std::endl;
}

ICharacter::ICharacter(ICharacter const & src) // Linea Leo
{
    *this = src;
    std::cout << "ICharacter Copy Constructor called" << std::endl;
}

ICharacter & ICharacter::operator=(ICharacter const & ref) // Linea Leo
{
    std::cout << "ICharacter Assignament operator called" << std::endl;
    this->m_type = ref.getType();
    return (*this);
}
*/


ICharacter::~ICharacter()
{
    std::cout << "ICharacter Destructor called (from ICharacter)" << std::endl;
}

const std::string & ICharacter::getName() const
{
    return ;
}

void ICharacter::equip(AMateria* m)
{
    
}

void ICharacter::unequip(int idx)
{
    
}

void ICharacter::use(int idx, ICharacter & target)
{
    
}

void ICharacter::printInventory( void ) const
{
    
}