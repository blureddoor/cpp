/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:22:32 by lvintila          #+#    #+#             */
/*   Updated: 2022/12/26 14:03:44 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <exception>
# include <iostream>
# include <vector>

template<typename T>
int    easyfind(T & container, int num)
{
    typename T::iterator it = find(container.begin(), container.end(), num);
    if( it != container.end())
        return (1);
    throw std::exception();
}

#endif