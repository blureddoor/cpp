/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:46:14 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/13 14:30:00 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *m_brain;
        
    public:
        Dog();
        Dog(Dog const & src);
        ~Dog();
        virtual Animal  & operator=(const Animal &ref);
        virtual void    makeSound() const;
        virtual Brain   *getBrain() const;

        virtual Dog & operator=(const Dog &ref);
};

#endif