/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:47:05 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/13 14:53:07 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *m_brain;
        
    public:
        Cat();
        Cat(Cat const & src);
        ~Cat();
        virtual Animal  & operator=(const Animal & ref);
        virtual void    makeSound() const;
        virtual Brain   *getBrain() const;

        virtual Cat & operator=(Cat const & ref);
};

#endif