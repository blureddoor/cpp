/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:24:33 by lvintila          #+#    #+#             */
/*   Updated: 2022/10/17 22:54:59 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
 * Default constructor called
 * Int constructor called
 * Float constructor called
 * Copy constructor called
 * Assignation operator called
 * Float constructor called
 * Assignation operator called
 * Destructor called
 * a is 1234.43
 * b is 10
 * c is 42.4219
 * d is 10
 * a is 1234 as integer
 * b is 10 as integer
 * c is 42 as integer
 * d is 10 as integer
 * Destructor called
 * Destructor called
 * Destructor called
 * Destructor called
 */

/*********** ex00 ***********/

int Fixed::getRawBits( void ) const
{
   // std::cout << "getRawBits member function called" << std::endl;
    return(this->m_b);
}

void Fixed::setRawBits ( int const raw )
{
    //std::cout << "setRawBits member function called" << std::endl;
    this->m_b = raw;
}

// Constructor
Fixed::Fixed()
{
    this->m_b = 0;
    std::cout << "Default constructor called" << std::endl;
}

// Destructor
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
/*********** ex01 ***********/

/*
 * Int Constructor
 */

Fixed::Fixed(int num)
{
    std::cout << "Int constructor called" << std::endl;
    setRawBits(num << this->m_b);
}

/*
 * Float Constructor
 * https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
 * Calculate x = floating_input * 2^(fractional_bits)
 * Round x to the nearest whole number (e.g. round(x))
 * Store the rounded x in an integer container
 */
Fixed::Fixed(float numfloat)
{
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits((int)roundf(numfloat * (1 << this->m_b)));
}

/*
 * We take the input value and divide it by 2 (2fractional_bts), puting the result into a float
 */
float Fixed::toFloat(void) const
{
    float f;

    f = (float)this->getRawBits() / (1 << this->m_b);
    return (f);
}

/* fix >> FIXED_POINT */
int Fixed::toInt (void) const
{
    return (this->getRawBits() >> this->m_b);
}

/* Operator overload (not a member function) */
std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    std::cout <<std::endl << "RAW: " << rhs.getRawBits() << std::endl;
    std::cout << std:: endl << "TOINT: " << rhs.toInt() << std::endl;
	std::cout << std:: endl << "TOFLOAT: " << rhs.toFloat() << std::endl;
    return (o);
}