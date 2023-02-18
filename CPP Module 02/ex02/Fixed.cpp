/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:24:33 by lvintila          #+#    #+#             */
/*   Updated: 2023/02/18 11:22:54 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

int Fixed::getRawBits( void ) const
{
    /*
     * std::cout << "getRawBits member function called" << std::endl;
     */
    return(this->m_b);
}

void Fixed::setRawBits ( int const raw )
{
    /*
     * std::cout << "setRawBits member function called" << std::endl;
     */
    this->m_b = raw;
}


/**** ex01 ****/

/*
 * Int Constructor
 * Constructor that accept an consts int as a parameter and
 * convert it to a value of 8:
 * the values of m_b it's inicialized as ex00:
 */

Fixed::Fixed(int num)
{
    std::cout << "Int constructor called" << std::endl;
    setRawBits(num << this->m_w);
}

/*
 * Float Constructor
 * Constructor that accept an float const as a parameter and
 * convert it to a fixed point (8)
 * the values of m_b it's inicialized as ex00
 *
 * https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
 * To convert from  floating-point to fixed-point, we follow this algorithm:
 * 1. Calculate x = floating_input * 2^(fractional_bits)
 * 2. Round x to the nearest whole number (e.g. round(x))
 * 3. Store the rounded x in an integer container
 * This is a constructor for a class called "Fixed". The constructor takes
 * a single argument, a floating-point number represented by num_float.
 * 
 * Sets the value of the fixed-point number stored in the object 
 * by calling the setRawBits method. The argument passed to the setRawBits method is 
 * an integer representation of num_float rounded to the nearest integer. 
 * The calculation performed to obtain this representation involves multiplying
 * num_float by a factor of (1 << this->m_w), where m_w is a member variable of the 
 * Fixed class that represents the number of fractional bits in the fixed-point
 * representation. This constructor is used to initialize a Fixed object from a floating-point number,
 * by converting the floating-point number to a fixed-point representation
 * and storing it in the object.
 */

Fixed::Fixed(float num_float)
{
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits((int)roundf(num_float * (1 << this->m_w)));
}

/*
 * We take the input value and divide it by  2 elevated to (number of fractional_bts (m_w), 
 * puting the result into a float
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

    /*
     * std::cout <<std::endl << "RAW: " << rhs.getRawBits() << std::endl;
     * std::cout << std:: endl << "TOINT: " << rhs.toInt() << std::endl;
     * std::cout << std:: endl << "TOFLOAT: " << rhs.toFloat() << std::endl;
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

/*
 * the operator+(-*\/) function allows two Fixed objects to be added together
 * using the +(-*\/) operator by converting both objects to their floating-point
 * representations, adding (subtracting, multiplying or dividing)
 * them together, and then creating a new Fixed object with the 
 * fixed-point representation of the operation.
 */

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

/*
 * prefix increment operator ++
 * the operator++ function increments the value of a Fixed object by 1
 * using the binary representation of the fixed-point value,
 * and then returns a reference to the modified object. This allows
 * the ++ operator to be used in a chained expression with other operators.
 */
        
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

/*
 * postfix increment operator ++
 * the operator++ function increments the value of a Fixed object by 1 using
 * the binary representation of the fixed-point value, but returns a copy of
 * the original value (before the increment). 
 * This allows the ++ operator to be used in a chained expression with other
 * operators, but also allows the original value of the Fixed object to be
 * used in the expression.
 */

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

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}