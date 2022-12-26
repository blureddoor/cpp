/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:31:39 by lvintila          #+#    #+#             */
/*   Updated: 2022/12/26 11:14:56 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <iostream>
# include <iomanip>
# include <ctime>
# include <cstdlib>
# include <string>

template <typename T>
class Array 
{
    private:
        unsigned int    m_n;
        T               * m_array;
    public:
        Array<T>( void ) : m_n(0), m_array(NULL)  {}
        Array<T>( unsigned int n ): m_n(n), m_array(new T[n]) {}
        Array<T>( Array const & src ) { *this = src; }

        Array<T>	&operator=( Array const & rhs) 
        {
            m_n = rhs._n;
            delete m_array;
            m_array = new T [rhs._n];
            for (unsigned int i = 0; i < m_n; i++)
                m_array[i] = rhs.m_array[i];
            return *this;
        }

        ~Array<T>( void ) { delete [] m_array; }

        T	&operator[](unsigned int i) 
        {
            if (i >= m_n)
                throw std::exception();
            return (m_array[i]);
        }

        unsigned int	size( void ) { return m_n; }

};

#endif