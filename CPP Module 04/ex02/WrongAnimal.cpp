/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:50:58 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/13 14:23:09 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
    *this = src;
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & ref )
{
    std::cout << "WrongAnimal Assignament operator called" << std::endl;
    std::cout << ref << std::endl;
    return (*this);
}

const std::string	& WrongAnimal::getType( void ) const
{
	return (this->type);
}

std::ostream & operator<<( std::ostream & o, const WrongAnimal & instance)
{
	o << "Este WrongAnimal es: " << instance.getType();
	return (o);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal Sound" << std::endl;
}