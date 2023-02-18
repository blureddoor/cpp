/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:24:49 by lvintila          #+#    #+#             */
/*   Updated: 2023/02/18 10:37:52 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed c;
    Fixed const d( 1 );
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << --c << std::endl;
    std::cout << c << std::endl;
    std::cout << c-- << std::endl;
    std::cout << c << std::endl;
    c = Fixed( d ) ;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;
    std::cout << Fixed::max( a, c ) << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    
    
return (0);
}