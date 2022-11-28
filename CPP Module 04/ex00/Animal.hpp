/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:32:10 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/16 20:43:07 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
    protected:
        std::string type;
    
    public:
        Animal();
        Animal(Animal const & src);
        virtual ~Animal();
        
        Animal              & operator=(const Animal &ref);
        const std::string   & getType (void) const;
        virtual void        makeSound() const;
};

std::ostream & operator<<( std::ostream &o, const Animal &instance );

#endif

