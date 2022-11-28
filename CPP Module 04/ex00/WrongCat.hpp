/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:48:58 by lvintila          #+#    #+#             */
/*   Updated: 2022/11/13 13:08:37 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:
        std::string m_type;
        
    public:
        WrongCat();
        WrongCat(WrongCat const & src);
        ~WrongCat();
        void  makeSound() const;

        WrongCat & operator=(const WrongCat &ref);
};

#endif