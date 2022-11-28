/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:47:05 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/13 13:24:59 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
    private:
        
    public:
        Cat();
        Cat(Cat const & src);
        ~Cat();
        virtual void    makeSound() const;

        Cat & operator=(const Cat &ref);
};

#endif