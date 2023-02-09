/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:24:33 by lvintila          #+#    #+#             */
/*   Updated: 2023/02/09 21:41:54 by lvintila         ###   ########.fr       */
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
    return(this->m_b);
}

void Fixed::setRawBits ( int const raw )
{
    // std::cout << "   setRawBits member function called" << std::endl;
    this->m_b = raw;
}

Fixed::Fixed()
{
    this->m_b = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    setRawBits(rhs.getRawBits());
    return (*this);
}