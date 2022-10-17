/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:24:33 by lvintila          #+#    #+#             */
/*   Updated: 2022/10/17 21:31:09 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
 * Default constructor called
 * Copy constructor called
 * Assignation operator called // <-- This line may be missing depending on your implementation
 * getRawBits member function called
 * Default constructor called
 * Assignation operator called
 * getRawBits member function called
 * getRawBits member function called
 * 0
 * getRawBits member function called
 * 0
 * getRawBits member function called
 * 0
 * Destructor called
 * Destructor called
 * Destructor called
 */

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->m_w);
}

void Fixed::setRawBits ( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->m_w = raw;
}

// Constructor
Fixed::Fixed()
{
    this->m_w = 0;
    std::cout << "Default constructor called" << std::endl;
}

// Destructor
Fixed::~Fixed()
{
    std::cout << "Desstructor called" << std::endl;
}
