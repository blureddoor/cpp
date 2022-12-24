/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 12:52:31 by lvintila          #+#    #+#             */
/*   Updated: 2022/12/24 12:52:59 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template<typename T>
void	swap( T &a, T &b )
{
	T tmp = a;

	a = b;
	b = tmp;
}

template<typename T>
const T	&min( const T &a, const T &b )
{
	return (a < b ? a : b);
}

template<typename T>
const T	&max( const T &a, const T &b )
{
	return (a > b ? a : b);
}

#endif