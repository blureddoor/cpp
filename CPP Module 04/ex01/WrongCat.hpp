/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:48:58 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/13 14:24:31 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:
        
    public:
        WrongCat();
        WrongCat(WrongCat const & src);
        ~WrongCat();
        void  makeSound() const;

        WrongCat & operator=(const WrongCat &ref);
};

#endif