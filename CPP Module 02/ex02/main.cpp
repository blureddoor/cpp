/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:24:49 by lvintila          #+#    #+#             */
/*   Updated: 2022/10/30 12:04:13 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed c;
    Fixed const d( 1 );
    
    std::cout << "1:  " << a << std::endl;
    std::cout << "2:  " << ++a << std::endl;
    std::cout << "3:  " << a << std::endl;
    std::cout << "4:  " << a++ << std::endl;
    std::cout << "5:  " << a << std::endl;
    std::cout << "6:  " << b << std::endl;
    std::cout << "7:  " << c << std::endl;
    std::cout << "8:  " << --c << std::endl;
    std::cout << "9:  " << c << std::endl;
    std::cout << "10: " << c-- << std::endl;
    std::cout << "11: " << c << std::endl;
    c = Fixed( d ) ;
    std::cout << "12: " << c << std::endl;
    std::cout << "13: " << d << std::endl;
    std::cout << "14: " << Fixed::min( a, b ) << std::endl;
    std::cout << "15: " << Fixed::max( a, c ) << std::endl;
    std::cout << "16: " << Fixed::max( a, b ) << std::endl;
    
    
return (0);
}