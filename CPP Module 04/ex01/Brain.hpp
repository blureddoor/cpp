/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:34:32 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/13 14:20:20 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
    private:
        static const int    m_numIdeas = 100;
    public:
        Brain();
        Brain(const Brain & src);
        ~Brain();
        Brain & operator=(const Brain & ref);
        std::string         ideas[Brain::m_numIdeas];
        
};
#endif