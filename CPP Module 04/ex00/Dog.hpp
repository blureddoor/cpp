/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:46:14 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/13 13:25:05 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
    private:
        
    public:
        Dog();
        Dog(Dog const & src);
        ~Dog();
        virtual void    makeSound() const;

        Dog & operator=(const Dog &ref);
};

#endif