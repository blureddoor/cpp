/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:24:33 by lvintila          #+#    #+#             */
/*   Updated: 2022/10/20 22:57:50 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*

0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016

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
//  std::cout << "Default constructor called" << std::endl;
}

// Destructor
Fixed::~Fixed()
{
    /* std::cout << "Destructor called" << std::endl; */
}

Fixed::Fixed(Fixed const &src)
{
/*    std::cout << "Copy constructor called" << std::endl; */
    *this = src;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
/*    std::cout << "Assignation operator called" << std::endl; */
    setRawBits(rhs.getRawBits());
    return (*this);
}
/*********** ex01 ***********/

/*
 * Int Constructor
 */

Fixed::Fixed(int num)
{
/*    std::cout << "Int constructor called" << std::endl; */
    setRawBits(num << this->m_w);
}

/*
 * Float Constructor
 * https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
 * Calculate x = floating_input * 2^(fractional_bits)
 * Round x to the nearest whole number (e.g. round(x))
 * Store the rounded x in an integer container
 */
Fixed::Fixed(float num_float)
{
/*    std::cout << "Float constructor called" << std::endl; */
    this->setRawBits((int)roundf(num_float * (1 << this->m_w)));
}

/*
 * We take the input value and divide it by 2 (2fractional_bts), puting the result into a float
 */
float Fixed::toFloat(void) const
{
    float f;

    f = (float)this->getRawBits() / (1 << this->m_w);
    return (f);
}

/* fix >> FIXED_POINT */
int Fixed::toInt (void) const
{
    return (this->getRawBits() >> this->m_w);
}

/* Operator overload (not a member function) */
std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
 
/*    std::cout <<std::endl << "RAW: " << rhs.getRawBits() << std::endl;

    std::cout << std:: endl << "TOINT: " << rhs.toInt() << std::endl;
	std::cout << std:: endl << "TOFLOAT: " << rhs.toFloat() << std::endl;
*/
    return (o);
}

/*********** ex02 ***********/

int Fixed::operator>(Fixed const & rhs) const
{
    if (this->getRawBits() > rhs.getRawBits())
        return (1);
    return (0);    
}

int Fixed::operator<(Fixed const & rhs) const
{
    if (this->getRawBits() < rhs.getRawBits())
        return (1);
    return (0);    
}

int Fixed::operator>=(Fixed const & rhs) const
{
    if (this->getRawBits() >= rhs.getRawBits())
        return (1);
    return (0);    
}

int Fixed::operator<=(Fixed const & rhs) const
{
    if (this->getRawBits()<= rhs.getRawBits())
        return (1);
    return (0);    
}

int Fixed::operator==(Fixed const & rhs) const
{
    if (this->getRawBits() == rhs.getRawBits())
        return (1);
    return (0);    
}

int Fixed::operator!=(Fixed const & rhs) const
{
    if (this->getRawBits() != rhs.getRawBits())
        return (1);
    return (0);    
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
    Fixed   ret(this->toFloat() + rhs.toFloat());
    return (ret);
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
    Fixed   ret(this->toFloat() - rhs.toFloat());
    return (ret);
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
    Fixed   ret(this->toFloat() * rhs.toFloat());
    return (ret);
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
    Fixed   ret(this->toFloat() / rhs.toFloat());
    return (ret);
}

        
Fixed &Fixed::operator++(void) // ++i
{
    this->m_b += 1;
    return (*this);
}
        

Fixed &Fixed::operator--() // --i
{
    this->m_b -= 1;
    return (*this);        
}

Fixed Fixed::operator++(int) // i++ 
{
    Fixed   temp = *this;
    this->m_b += 1;
    return (temp);
}

Fixed Fixed::operator--(int) // i--
{
    Fixed   temp = *this;
    this->m_b -= 1;
    return (temp);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}