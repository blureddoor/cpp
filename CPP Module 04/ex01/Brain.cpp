/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:42:05 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/13 14:28:49 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::Brain(Brain const & src)
{
    std::cout << "Brain Copy Constructor Called" << std::endl;
    *this = src;
}

Brain::~Brain()
{
    std::cout << "Brain Default Destructor Called" << std::endl;
}

Brain & Brain::operator=(Brain const & ref)
{
    std::cout << "Brain Assignment operator Called" << std::endl;
    for (int i = 0; i < Brain::m_numIdeas; i++)
    {
        this->ideas[i] = ref.ideas[i];
    }
    return (*this);
}