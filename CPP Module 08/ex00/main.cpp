/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:22:23 by lvintila          #+#    #+#             */
/*   Updated: 2022/12/26 14:18:55 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <algorithm>
#include <iostream>

int main(void)
{
    std::vector<int> vector;

    for (int i = 0; i < 115; i++)
        vector.push_back(i);
    try
    {
        if (easyfind(vector, 115))
            std::cout << "\nvalue found!!! \n" << std::endl;   
    }
    catch(const std::exception& e)
    {
        std::cout << "\nvalue not found \n" << std::endl;

    }
    
    return (0);
}