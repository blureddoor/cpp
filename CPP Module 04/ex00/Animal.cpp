/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:14:38 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/16 20:45:50 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(Animal const & src)
{
    *this = src;
    std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}

Animal & Animal::operator=(Animal const & ref )
{
    std::cout << "Assignament operator called" << std::endl;
    std::cout << ref << std::endl;
    return (*this);
}

const std::string	& Animal::getType( void ) const
{
	return (this->type);
}

std::ostream & operator<<( std::ostream & o, const Animal & instance)
{
	o << "Este Animal es: " << instance.getType();
	return (o);
}

void    Animal::makeSound() const
{}

