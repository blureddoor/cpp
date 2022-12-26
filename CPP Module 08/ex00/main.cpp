/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:22:23 by lvintila          #+#    #+#             */
/*   Updated: 2022/12/26 14:03:55 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <algorithm>
#include <iostream>

template<typename T>
void    displayIterator(T it, T end)
{
    if (it != end)
        std::cout << "iterator: " << *it << std::endl;
    else
        std::cout << "iterator reached the end of container" << std::endl;
}

int main(void)
{
    std::vector<int> vector;
    std::vector<int>::iterator it;
    
    for (int i = 1; i < 59; i++)
        vector.push_back(i);
    it = easyfind(vector, 43);
    displayIterator(it, vector.end());
    it = easyfind(vector, 42);
    displayIterator(it, vector.end());

}