/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:24:49 by lvintila          #+#    #+#             */
/*   Updated: 2023/02/12 12:06:25 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    std::cout << "0." << std::endl;
    Fixed a;
    std::cout << "1." << std::endl;
    Fixed const b( 10 );
    std::cout << "2." << std::endl;
    Fixed const c( 42.42f );
    std::cout << "3." << std::endl;
    Fixed const d( b );
    std::cout << "4." << std::endl;

    a = Fixed( 1234.4321f );
    std::cout << "5." << std::endl;
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    
    return 0;
}